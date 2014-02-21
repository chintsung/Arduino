/*
 * This file contains some common useful functions.
 *
 * ChinTsung
 */
 
// variables created by the build process when compiling the sketch
extern int __bss_end;
extern void *__brkval;
 
// function to return the amount of free RAM
int memoryFree() {
  int freeValue;
  
  if ((int)__brkval == 0)
    freeValue = ((int) &freeValue) - ((int) &__bss_end);
  else
    freeValue = ((int) &freeValue) - ((int) __brkval);
    
  return freeValue;
}


// function to print the EDID stored in buffer[]
void printData(unsigned int length)
{
  int rows = length / 16;

  for (int row=0; row<rows; row++)
  {
    Serial.print(" (");
    if (row == 0)
      Serial.print(0, HEX);
    Serial.print(row*16, HEX);
    Serial.print(") ");

    for (int half_col=0; half_col<2; half_col++)
    {
      for (int col=0; col<8; col++)
      {
        int index = (row*16) + (half_col*8) + col;
        byte b = buffer[index];
        if (b < 16)
          Serial.print(0, HEX);
        Serial.print(b, HEX);
        Serial.print(" ");
      }

      if (half_col == 0)
        Serial.print("- ");
      else
        Serial.println();
    }
  }
}

// function to show the message and wait user to enter any key
byte waitUserReply(String msg)
{
  Serial.println(msg);
  while (!Serial.available()) {
    ;
  }
  return Serial.parseInt();
}

void printLCD(const prog_uchar* msg, byte line) {
  char c;
  
  switch (line) {
    case 2:
      lcd.setCursor(4, 1);
      lcd.print(F("            "));  // clear the status info
      lcd.setCursor(4, 1);
      break;
    default:
      lcd.clear();
  }
  while ((c = pgm_read_byte(msg++))) {
    lcd.print(c);
  }
}















