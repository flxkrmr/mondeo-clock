#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>
#include "RTClib.h"

#define REFRESH_DELAY_MS 10

RTC_DS1307 rtc;

U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ SCL, /* data=*/ SDA);   // pin remapping with ESP8266 HW I2C

unsigned short inc = 0;

void setupSerial();
void setupRtc();
void setupU8g2();

void displayTime(unsigned short i);

void setup() {
  setupSerial();
  setupRtc();
  setupU8g2();
}


void loop() {
  displayTime(inc);
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

#define TIME_REFRESH_CYCLES 50 // with 10 ms delay this is each half second
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