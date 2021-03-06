/*
 * This file contains the info of EDIDs which will be flashed.
 *
 * ChinTsung
 * 20 January 2014
 */

struct product {
  unsigned char name[17];
  byte analog[128];
  byte digit[256];
};

product s280p5_1920_358 PROGMEM = {
  "S280P5_1920x358"
  ,
  
  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x05, 0x28, 0x00, 0x00, 0x00, 0x00,
    0x2A, 0x16, 0x01, 0x03, 0x68, 0x46, 0x0D, 0x78,  0x2E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0xC8, 0x14,  0x80, 0x18, 0x71, 0x66, 0x2D, 0x10, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x82, 0x20, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x38,
    0x4C, 0x1E, 0x52, 0x10, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x32, 0x38, 0x30, 0x50, 0x35, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x21, }
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x05, 0x28, 0x00, 0x00, 0x00, 0x00,
    0x2A, 0x16, 0x01, 0x03, 0xE8, 0x46, 0x0D, 0x78,  0x2E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0xC8, 0x14,  0x80, 0x18, 0x71, 0x66, 0x2D, 0x10, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x82, 0x20, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x1E, 0x52, 0x10, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x32, 0x38, 0x30, 0x50, 0x32, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x01, 0xAF,

    0x02, 0x03, 0x1B, 0xF1, 0x47, 0x05, 0x04, 0x02,  0x01, 0x90, 0x06, 0x0E, 0x23, 0x09, 0x07, 0x07,
    0x83, 0x01, 0x00, 0x00, 0x66, 0x03, 0x0C, 0x00,  0x10, 0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71,
    0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0x06,  0x44, 0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80,
    0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25,  0x00, 0x06, 0x44, 0x21, 0x00, 0x00, 0x9E, 0x01,
    0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E,  0x28, 0x55, 0x00, 0x06, 0x44, 0x21, 0x00, 0x00,
    0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D,  0x10, 0x10, 0x3E, 0x96, 0x00, 0x06, 0x44, 0x21,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57  }
};

product s380p4_1920_538 PROGMEM = {
  "S380P4_1920x538"
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x04, 0x38, 0x00, 0x00, 0x00, 0x00,
    0x21, 0x17, 0x01, 0x03, 0x08, 0x5C, 0x1A, 0x78,  0x2E, 0x58, 0x29, 0xA6, 0x54, 0x46, 0x99, 0x22,
    0x1B, 0x47, 0x4C, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x2A, 0x1E,  0x80, 0x18, 0x71, 0x1A, 0x2D, 0x20, 0x58, 0x2C,
    0x45, 0x00, 0x97, 0x04, 0x31, 0x00, 0x00, 0x1A,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0x97, 0x05, 0x32, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x3C, 0x50, 0x11, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x33, 0x38, 0x30, 0x50, 0x34, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x07, }
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x04, 0x38, 0x00, 0x00, 0x00, 0x00,
    0x21, 0x17, 0x01, 0x03, 0xE8, 0x5C, 0x1A, 0x78,  0x2E, 0x58, 0x29, 0xA6, 0x54, 0x46, 0x99, 0x22,
    0x1B, 0x47, 0x4C, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x2A, 0x1E,  0x80, 0x18, 0x71, 0x1A, 0x2D, 0x20, 0x58, 0x2C,
    0x45, 0x00, 0x97, 0x04, 0x31, 0x00, 0x00, 0x1A,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0x97, 0x05, 0x32, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x3C, 0x50, 0x11, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x33, 0x38, 0x30, 0x50, 0x34, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x01, 0x26,

    0x02, 0x03, 0x1B, 0xF1, 0x47, 0x05, 0x04, 0x02,  0x01, 0x90, 0x06, 0x0E, 0x23, 0x09, 0x07, 0x07,
    0x83, 0x01, 0x00, 0x00, 0x66, 0x03, 0x0C, 0x00,  0x10, 0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71,
    0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0x06,  0x44, 0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80,
    0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25,  0x00, 0x06, 0x44, 0x21, 0x00, 0x00, 0x9E, 0x01,
    0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E,  0x28, 0x55, 0x00, 0x06, 0x44, 0x21, 0x00, 0x00,
    0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D,  0x10, 0x10, 0x3E, 0x96, 0x00, 0x06, 0x44, 0x21,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57  }
};

product m320m1_1920_1080 PROGMEM = {
  "M320M1_1920x1080"
  ,
  
  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x01, 0x32, 0x00, 0x00, 0x00, 0x00,
    0x22, 0x17, 0x01, 0x03, 0x68, 0x46, 0x27, 0x78,  0x2E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x02, 0x3A,  0x80, 0x18, 0x71, 0x38, 0x2D, 0x40, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x89, 0x21, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x38,
    0x4C, 0x1E, 0x52, 0x10, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x4D, 0x33, 0x32, 0x30, 0x4D, 0x31, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0xB0  }
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x01, 0x32, 0x00, 0x00, 0x00, 0x00,
    0x22, 0x17, 0x01, 0x03, 0xE8, 0x46, 0x27, 0x78,  0x2E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x02, 0x3A,  0x80, 0x18, 0x71, 0x38, 0x2D, 0x40, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x89, 0x21, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x1E, 0x52, 0x10, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x32, 0x38, 0x30, 0x50, 0x32, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x01, 0x2C,

    0x02, 0x03, 0x1B, 0xF1, 0x47, 0x05, 0x04, 0x02,  0x01, 0x90, 0x06, 0x0E, 0x23, 0x09, 0x07, 0x07,
    0x83, 0x01, 0x00, 0x00, 0x66, 0x03, 0x0C, 0x00,  0x10, 0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71,
    0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0x06,  0x44, 0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80,
    0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25,  0x00, 0x06, 0x44, 0x21, 0x00, 0x00, 0x9E, 0x01,
    0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E,  0x28, 0x55, 0x00, 0x06, 0x44, 0x21, 0x00, 0x00,
    0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D,  0x10, 0x10, 0x3E, 0x96, 0x00, 0x06, 0x44, 0x21,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57  }
};

product dsd5028n_1920_358 PROGMEM = {
  "DSD5028_1920x358"
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x05, 0x28, 0x00, 0x00, 0x00, 0x00,
    0x2A, 0x16, 0x01, 0x03, 0x68, 0x46, 0x0D, 0x78,  0x6E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0xC8, 0x14,  0x80, 0x18, 0x71, 0x66, 0x2D, 0x10, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x82, 0x20, 0x00, 0x00, 0x02,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x02, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x38,
    0x4C, 0x1E, 0x52, 0x10, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x44, 0x53, 0x44, 0x2D, 0x35, 0x30, 0x32,  0x38, 0x4E, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x84 }
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x05, 0x28, 0x00, 0x00, 0x00, 0x00,
    0x2A, 0x16, 0x01, 0x03, 0xE8, 0x46, 0x0D, 0x78,  0x6E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0xC8, 0x14,  0x80, 0x18, 0x71, 0x66, 0x2D, 0x10, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x82, 0x20, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x1E, 0x52, 0x10, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x44, 0x53, 0x44, 0x2D, 0x35, 0x30, 0x32,  0x38, 0x4E, 0x0A, 0x0A, 0x0A, 0x0A, 0x01, 0xD7,

    0x02, 0x03, 0x1B, 0xF1, 0x47, 0x05, 0x04, 0x02,  0x01, 0x90, 0x06, 0x0E, 0x23, 0x09, 0x07, 0x07,
    0x83, 0x01, 0x00, 0x00, 0x66, 0x03, 0x0C, 0x00,  0x10, 0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71,
    0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0x06,  0x44, 0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80,
    0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25,  0x00, 0x06, 0x44, 0x21, 0x00, 0x00, 0x9E, 0x01,
    0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E,  0x28, 0x55, 0x00, 0x06, 0x44, 0x21, 0x00, 0x00,
    0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D,  0x10, 0x10, 0x3E, 0x96, 0x00, 0x06, 0x44, 0x21,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57  }
};

product dsd5038n_1920_538 PROGMEM = {
  "DSD5038_1920x538"
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x04, 0x38, 0x00, 0x00, 0x00, 0x00,
    0x21, 0x17, 0x01, 0x03, 0x08, 0x5C, 0x1A, 0x78,  0x6E, 0x58, 0x29, 0xA6, 0x54, 0x46, 0x99, 0x22,
    0x1B, 0x47, 0x4C, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x2A, 0x1E,  0x80, 0x18, 0x71, 0x1A, 0x2D, 0x20, 0x58, 0x2C,
    0x45, 0x00, 0x97, 0x04, 0x31, 0x00, 0x00, 0x02,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0x97, 0x05, 0x32, 0x00,  0x00, 0x02, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x3C, 0x50, 0x11, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x44, 0x53, 0x44, 0x2D, 0x35, 0x30, 0x33,  0x38, 0x4E, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x65 }
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x04, 0x38, 0x00, 0x00, 0x00, 0x00,
    0x21, 0x17, 0x01, 0x03, 0xE8, 0x5C, 0x1A, 0x78,  0x6E, 0x58, 0x29, 0xA6, 0x54, 0x46, 0x99, 0x22,
    0x1B, 0x47, 0x4C, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x2A, 0x1E,  0x80, 0x18, 0x71, 0x1A, 0x2D, 0x20, 0x58, 0x2C,
    0x45, 0x00, 0x97, 0x04, 0x31, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0x97, 0x05, 0x32, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x3C, 0x50, 0x11, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x44, 0x53, 0x44, 0x2D, 0x35, 0x30, 0x33,  0x38, 0x4E, 0x0A, 0x0A, 0x0A, 0x0A, 0x01, 0x4C,

    0x02, 0x03, 0x1B, 0xF1, 0x47, 0x05, 0x04, 0x02,  0x01, 0x90, 0x06, 0x0E, 0x23, 0x09, 0x07, 0x07,
    0x83, 0x01, 0x00, 0x00, 0x66, 0x03, 0x0C, 0x00,  0x10, 0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71,
    0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0x06,  0x44, 0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80,
    0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25,  0x00, 0x06, 0x44, 0x21, 0x00, 0x00, 0x9E, 0x01,
    0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E,  0x28, 0x55, 0x00, 0x06, 0x44, 0x21, 0x00, 0x00,
    0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D,  0x10, 0x10, 0x3E, 0x96, 0x00, 0x06, 0x44, 0x21,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57  }
};

product s280m1_1920_358 PROGMEM = {
  "S280m1_1920x358"
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x01, 0x28, 0x00, 0x00, 0x00, 0x00,
    0x0C, 0x19, 0x01, 0x03, 0x68, 0x46, 0x27, 0x78,  0x2E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x02, 0x3A,  0x80, 0x18, 0x71, 0x66, 0xFF, 0x12, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x89, 0x21, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x38,
    0x4C, 0x1E, 0x52, 0x10, 0x02, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x32, 0x38, 0x30, 0x4D, 0x31, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0xEF }
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x01, 0x28, 0x00, 0x00, 0x00, 0x00,
    0x0C, 0x19, 0x01, 0x03, 0xE8, 0x46, 0x27, 0x78,  0x2E, 0xC5, 0x83, 0xA4, 0x59, 0x49, 0x9A, 0x24,
    0x12, 0x46, 0x49, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x02, 0x3A,  0x80, 0x18, 0x71, 0x66, 0xFF, 0x12, 0x58, 0x2C,
    0x45, 0x00, 0xBC, 0x89, 0x21, 0x00, 0x00, 0x1E,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0xBC, 0x89, 0x21, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x1E, 0x52, 0x10, 0x02, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x32, 0x38, 0x30, 0x4D, 0x31, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x01, 0x7A,

    0x02, 0x03, 0x1B, 0xF1, 0x47, 0x05, 0x04, 0x02,  0x01, 0x90, 0x06, 0x0E, 0x23, 0x09, 0x07, 0x07,
    0x83, 0x01, 0x00, 0x00, 0x66, 0x03, 0x0C, 0x00,  0x10, 0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71,
    0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0x06,  0x44, 0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80,
    0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25,  0x00, 0x06, 0x44, 0x21, 0x00, 0x00, 0x9E, 0x01,
    0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E,  0x28, 0x55, 0x00, 0x06, 0x44, 0x21, 0x00, 0x00,
    0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D,  0x10, 0x10, 0x3E, 0x96, 0x00, 0x06, 0x44, 0x21,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57 }
};

product s380p6_1920_545 PROGMEM = {
  "S380P6_1920x545"
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x06, 0x38, 0x00, 0x00, 0x00, 0x00,
    0x2B, 0x18, 0x01, 0x03, 0x08, 0x5C, 0x1A, 0x78,  0x2E, 0x58, 0x29, 0xA6, 0x54, 0x46, 0x99, 0x22,
    0x1B, 0x47, 0x4C, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x87, 0x1E,  0x80, 0x18, 0x71, 0x21, 0x2D, 0x20, 0x58, 0x2C,
    0x45, 0x00, 0x97, 0x04, 0x31, 0x00, 0x00, 0x1A,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0x97, 0x05, 0x32, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x3C, 0x50, 0x11, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x33, 0x38, 0x30, 0x50, 0x36, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x94 }
  ,

  {
    0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,  0x23, 0x21, 0x06, 0x38, 0x00, 0x00, 0x00, 0x00,
    0x2B, 0x18, 0x01, 0x03, 0xE8, 0x5C, 0x1A, 0x78,  0x2E, 0x58, 0x29, 0xA6, 0x54, 0x46, 0x99, 0x22,
    0x1B, 0x47, 0x4C, 0xBF, 0xEF, 0x00, 0x81, 0x80,  0x81, 0x40, 0x71, 0x4F, 0x95, 0x00, 0x95, 0x0F,
    0xB3, 0x00, 0x81, 0xC0, 0x01, 0x01, 0x87, 0x1E,  0x80, 0x18, 0x71, 0x21, 0x2D, 0x20, 0x58, 0x2C,
    0x45, 0x00, 0x97, 0x04, 0x31, 0x00, 0x00, 0x1A,  0x02, 0x3A, 0x80, 0x18, 0x71, 0x38, 0x2D, 0x40,
    0x58, 0x2C, 0x45, 0x00, 0x97, 0x05, 0x32, 0x00,  0x00, 0x1E, 0x00, 0x00, 0x00, 0xFD, 0x00, 0x39,
    0x3F, 0x3C, 0x50, 0x11, 0x00, 0x0A, 0x20, 0x20,  0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xFC,
    0x00, 0x53, 0x33, 0x38, 0x30, 0x50, 0x36, 0x0A,  0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x01, 0xB3,

    0x02, 0x03, 0x1B, 0xF1, 0x47, 0x05, 0x04, 0x02,  0x01, 0x90, 0x06, 0x0E, 0x23, 0x09, 0x07, 0x07,
    0x83, 0x01, 0x00, 0x00, 0x66, 0x03, 0x0C, 0x00,  0x10, 0x00, 0x00, 0x02, 0x3A, 0x80, 0x18, 0x71,
    0x38, 0x2D, 0x40, 0x58, 0x2C, 0x45, 0x00, 0x06,  0x44, 0x21, 0x00, 0x00, 0x1E, 0x01, 0x1D, 0x80,
    0x18, 0x71, 0x1C, 0x16, 0x20, 0x58, 0x2C, 0x25,  0x00, 0x06, 0x44, 0x21, 0x00, 0x00, 0x9E, 0x01,
    0x1D, 0x00, 0x72, 0x51, 0xD0, 0x1E, 0x20, 0x6E,  0x28, 0x55, 0x00, 0x06, 0x44, 0x21, 0x00, 0x00,
    0x1E, 0x8C, 0x0A, 0xD0, 0x8A, 0x20, 0xE0, 0x2D,  0x10, 0x10, 0x3E, 0x96, 0x00, 0x06, 0x44, 0x21,
    0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57  }
};








