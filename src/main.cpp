#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>
#include "RTClib.h"

extern "C"
{
  #include "bitmapMondeo.h"
  #include "bitmapFord.h"
}

#define REFRESH_DELAY_MS 10

RTC_DS1307 rtc;

U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ SCL, /* data=*/ SDA);   // pin remapping with ESP8266 HW I2C

unsigned short inc = 0;

enum Mode {
  DISPLAY_TIME,
  MONDEO_LOGO,
  FORD_LOGO
};

Mode mode;

void setupSerial();
void setupRtc();
void setupU8g2();

// return 0 when done;
void displayTime(unsigned short i);
int displayMondeo(unsigned short i);
int displayFord(unsigned short i);
void displayNoise(unsigned short i);

void setup() {
  setupSerial();
  setupRtc();
  setupU8g2();

  mode = FORD_LOGO;
}

void loop() {
  switch (mode) {
    case FORD_LOGO:
      if(!displayFord(inc))
        mode = MONDEO_LOGO;
      break;
    case MONDEO_LOGO:
      if(!displayMondeo(inc))
        mode = DISPLAY_TIME;
      break;
    case DISPLAY_TIME:
      displayTime(inc);
      break;
  }

  delay(REFRESH_DELAY_MS);
  inc++;
}


void setupSerial() {  
  Serial.begin(115200);
  while (!Serial);
}

void setupRtc() {
  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    Serial.flush();
    while (1) delay(10);
  }

  if (!rtc.isrunning()) {
    Serial.println("RTC is not running, adjust with time from binary");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void setupU8g2() {
  u8g2.begin();
}

#define TIME_REFRESH_CYCLES 50
bool delim_present = true;
void displayTime(unsigned short i) {
  if (i % TIME_REFRESH_CYCLES) {
    return;
  }

  char buf[10];
  char delim = delim_present ? ':' : ' ';
  delim_present = !delim_present;

  DateTime now = rtc.now();

  sprintf(buf, "%02d%c%02d", now.hour(), delim, now.minute());

  u8g2.setFont(u8g2_font_inr30_mf);
  u8g2.clearBuffer();
  u8g2.drawStr(0,32,buf);

  Serial.println(buf);
  u8g2.sendBuffer();
}

#define NOISE_REFRESH_CYCLES 25
void displayNoise(unsigned short i) {
  if (i % NOISE_REFRESH_CYCLES) {
    return;
  }

  u8g2.clearBuffer();

  for(int x = 0; x < 128; x++) {
    for(int y = 0; y < 32; y++) {
      if(!random(4)) {
        u8g2.drawPixel(x, y);
      }
    }
  }
  
  u8g2.sendBuffer();
}

int displayMondeoCyclesStart = 0;
bool displayMondeoMovementDone = false; 
bool displayMondeoStarted = false;
#define DISPLAY_MONDEO_CYCLES 40
int displayMondeo(unsigned short i) {
  if (!displayMondeoStarted) {
    displayMondeoCyclesStart = i;
    displayMondeoStarted = true;
  }
  int y;
  if (displayMondeoMovementDone) {
    y = 0;
  } else {
    int x = (i - displayMondeoCyclesStart);
    if (x > 32) {
      displayMondeoMovementDone = true;
    }

    y = x-32;
  }

  u8g2.clearBuffer();
  u8g2.drawXBM(0, y, BITMAP_MONDEO_WIDTH, BITMAP_MONDEO_HEIGHT, bitmapMondeo);
  u8g2.sendBuffer();
  if (i - displayMondeoCyclesStart > DISPLAY_MONDEO_CYCLES) {
    return 0;
  } else {
    return 1;
  }
}

int displayFordCyclesStart = 0;
bool displayFordMovementDone = false; 
bool displayFordStarted = false;
#define DISPLAY_FORD_CYCLES 40
int displayFord(unsigned short i) {
  if (!displayFordCyclesStart) {
    displayFordCyclesStart = i;
    displayFordStarted = true;
  }
  u8g2.clearBuffer();
  int y;
  if (displayFordMovementDone) {
    y = 0;
  } else {
    int x = (i - displayFordCyclesStart);
    if (x > 32) {
      displayFordMovementDone = true;
    }

    y = x-32;
  }
  u8g2.drawXBM(20, y, BITMAP_FORD_WIDTH, BITMAP_FORD_HEIGHT, bitmapFord);
  u8g2.sendBuffer();
  if (i - displayFordCyclesStart > DISPLAY_FORD_CYCLES) {
    return 0;
  } else {
    return 1;
  }
}