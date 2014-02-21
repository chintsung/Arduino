/* EDID editor for HYAM
 * 
 * ChinTsung
 * 20 January 2014 
 */

#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <avr/pgmspace.h>
#include "EDID_info.h"

#define EDID_ADDRESS 0x50    // Address of the EDID eeprom chip
#define LCD_ADDRESS 0x27     // Define LCD Address where the PCF8574T is
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7

LiquidCrystal_I2C lcd(LCD_ADDRESS, En_pin, Rw_pin, Rs_pin, D4_pin, D5_pin, 
                      D6_pin, D7_pin);

// ***** struct declaration starts *****
// ***** struc declaration ends *****

// ***** Global variables declaration starts *****
byte buffer[256] = {0};
byte prod_num = 255;     // current product number decided by the combination of prodPins
byte current_source = 2;
int exeBtnPin = 13;      // the number of the execution button pin
//int modePin = 4;         // the number of the mode pin (read/write mode)
int sourcePin =4;        // the number of the input source pin (VGA/DVI)
int prodPin1 = 5;
int prodPin2 = 6;
int wpPin_VGA = 10;
int wpPin_DVI = 11;
product* prod_list[] = {&s280p2_1920_358, &s380p1_1920_538};
const prog_uchar strWriteSuccess[] PROGMEM = "Write success!";
const prog_uchar strWriteFail[] PROGMEM = "Write fail!";
const prog_uchar strWriting[] PROGMEM = "Writing...";
// ***** Global variables declaration ends *****

void setup() {
  Serial.begin(9600);
  Wire.begin();        // join i2c bus as a Master
  pinMode(exeBtnPin, INPUT);
  //pinMode(modePin, INPUT);
  pinMode(sourcePin, INPUT);
  pinMode(prodPin1, INPUT_PULLUP);
  pinMode(prodPin2, INPUT_PULLUP);
  pinMode(wpPin_VGA, OUTPUT);
  pinMode(wpPin_DVI, OUTPUT);
  
  lcd.begin(16, 2);
  // Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN, POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home();          // go home
}

void loop() {
  //byte mode = 0;        // the current mode, 0: read; 1: write
  byte state;           // the current state of the exe button pin
  byte previous = LOW;  // the previous state of the exe button pin
  
  // the following variables are long's because the time, measured in miliseconds,
  // will quickly become a bigger number than can be stored in an int.
  long time = 0;        // the last time the exe pin was toggled
  int debounce = 300;   // the debounce time, increase if the output flickers

  //Serial.println(memoryFree());  // print the free memory
  getProduct();
  //mode = (digitalRead(modePin) == HIGH ? 1 : 0);
  setInputSource();
  state = digitalRead(exeBtnPin);

  // if the exe button just went from LOW and HIGH and we've waited long enough
  // to ignore any noise on the circuit, toggle the exe pin and remember
  // the time
  if (state==HIGH && previous==LOW && millis()-time>debounce) {
    switch (digitalRead(sourcePin)) {
      case 0:
        writeEDID(0, (prog_uchar*)prod_list[prod_num]->analog, 
                    sizeof(prod_list[prod_num]->analog));
        break;
      case 1:
        writeEDID(0, (prog_uchar*)prod_list[prod_num]->digit, 
                    sizeof(prod_list[prod_num]->digit));
        break;
    }
    
    time = millis();
  }
  previous = state;
  delay(200);
}

void readEDID(unsigned int length) {
  // BUFFER_LENGTH is depending on arduino-1.0.5/libraries/Wire/Wire.h;
  byte blocks = length / BUFFER_LENGTH;

  memset(buffer, 0, sizeof(buffer));  // Reset buffer as {0, 0, ... , 0}
  //Serial.println(F("Reading EDID..."));

  Wire.beginTransmission(EDID_ADDRESS);
  Wire.write(0);  // queues bytes for transmission from a master to slave device
  Wire.endTransmission();

  for (byte block=0; block<blocks; block++)
  {
    int index = 0;
    Wire.requestFrom(EDID_ADDRESS, BUFFER_LENGTH);  // request BUFFER_LENGTH bytes from edid address

    while (Wire.available() && index<BUFFER_LENGTH)  // slave may send less than requested
    {
      byte received = Wire.read();  // receive a byte
      buffer[block*BUFFER_LENGTH+index] = received;
      index++;
    }
  }
  //Serial.println(F("Finished reading EDID."));
  //printData(length);
}

/* 
 The 24C02 EEPROM is capable of an 8-byte page write.
 The status of the transmission:
 - 0:success
 - 1:data too long to fit in transmit buffer
 - 2:received NACK on transmit of address
 - 3:received NACK on transmit of data
 - 4:other error
 */
void writeEDID(unsigned int eeaddress, prog_uchar data[], unsigned int data_size) {
  byte trans_status;

  printLCD(strWriting, 2);
  for (int i=0; i<data_size; i++) {
    Wire.beginTransmission(EDID_ADDRESS);
    Wire.write(eeaddress+i);
    Wire.write(pgm_read_byte(&data[i]));
    trans_status = Wire.endTransmission();

    if (trans_status != 0) {
      Serial.print(i);
      Serial.print("\t");
      Serial.println(trans_status);
      printLCD(strWriteFail, 2);
      break;
    }
    delay(5);
  }
  
  if (trans_status == 0) {
    if (compareEDID(data, data_size))
      printLCD(strWriteSuccess, 2);
    else
      printLCD(strWriteFail, 2);
  }
}

boolean compareEDID(prog_uchar data[], unsigned int data_size) {
  readEDID(data_size);
  for (int i=0; i<data_size; i++)
  {
    if (pgm_read_byte(&data[i]) != buffer[i]) {
      return false;
    }
  }
  return true;
}

void getProduct() {
  byte keys =   pow(2, 0)*digitalRead(prodPin1) 
              + pow(2, 1)*digitalRead(prodPin2)
              ;

  if (keys != prod_num) {
    current_source = 2;  // for reseting source info
    prod_num = keys;
    if (prod_num >= sizeof(prod_list)/sizeof(product*)) {
      lcd.clear();
      lcd.print(F("NO PRODUCT"));
    }
    else
      printLCD(prod_list[prod_num]->name, 1);
  }
}

// Input source represents "VGA" while sourcePin is LOW, and "DVI" while HIGH.
void setInputSource() {
  if (digitalRead(sourcePin) != current_source) {
    openWriteProtect(digitalRead(sourcePin));

    lcd.setCursor(0, 1);               // set cursor at col 1 & row 2
    lcd.print(F("                "));  // clear row 2
    lcd.setCursor(0, 1);
    if (digitalRead(sourcePin) == LOW)
      lcd.print(F("VGA "));
    else
      lcd.print(F("DVI "));
    
    current_source = digitalRead(sourcePin);
  }
}

// Set DVI write protected and VGA writable while source is VGA.
// Set DVI writable and VGA write protected while source is DVI. 
void openWriteProtect(int source) {
  digitalWrite(wpPin_VGA, source==0 ? LOW : HIGH);
  digitalWrite(wpPin_DVI, source==0 ? HIGH : LOW);
}

