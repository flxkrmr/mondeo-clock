#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>
#include "RTClib.h"

RTC_DS1307 rtc;

U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ SCL, /* data=*/ SDA);   // pin remapping with ESP8266 HW I2C

void setupSerial();
void setupRtc();
void setupU8g2();

void displayTime(char delim);

void setup() {
  setupSerial();
  setupRtc();
  setupU8g2();
}

void loop() {
  displayTime(':');
  delay(500);
  displayTime(' ');
  delay(500);
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
  u8g2.setFont(u8g2_font_inr30_mf);
}

void displayTime(char delim) { 
  char buf[10];
  DateTime now = rtc.now();

  sprintf(buf, "%02d%c%02d", now.hour(), delim, now.minute());
          
  u8g2.clearBuffer();
  u8g2.drawStr(0,32,buf);

  Serial.println(buf);
  u8g2.sendBuffer();
}