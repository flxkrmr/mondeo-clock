#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>
#include "RTClib.h"
#include <EasyButton.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#include "ui/UiTime.h"
#include "ui/UiStartup.h"
#include "ui/UiStopwatch.h"
#include "ui/UiTemperature.h"

extern "C"
{
  #include "bitmapMondeo.h"
  #include "bitmapFord.h"
}

#define REFRESH_DELAY_MS 10

#define BUTTON_H D3
#define BUTTON_M D4
#define ONE_WIRE D7

EasyButton button_h(BUTTON_H);
EasyButton button_m(BUTTON_M);

RTC_DS1307 rtc;
U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* clock=*/ SCL, /* data=*/ SDA);   // pin remapping with ESP8266 HW I2C
OneWire oneWire(ONE_WIRE);
DallasTemperature sensors(&oneWire);

UiTime uiTime(&u8g2, &rtc);
UiStartup uiStartup(&u8g2);
UiStopwatch uiStopwatch(&u8g2);
UiTemperature uiTemperature(&u8g2, &sensors);

enum Mode {
  STARTUP,
  TIME,
  STOPWATCH,
  TEMPERATURE
} mode;

void setupSerial();
void setupRtc();
void setupU8g2();

int displayMondeo(unsigned short i);
int displayFord(unsigned short i);
void displayNoise(unsigned short i);

void onButtonH();
void onButtonHLong();
void onButtonM();
void onButtonMLong();

void setup() {
  setupSerial();
  setupRtc();
  setupU8g2();
  sensors.begin();

  uiStartup.init();

  button_h.begin();
  button_h.onPressed(onButtonH);
  button_h.onPressedFor(500, onButtonHLong);

  button_m.begin();
  button_m.onPressed(onButtonM);
  button_m.onPressedFor(500, onButtonMLong);

  mode = STARTUP;
}

void loop() {
  switch (mode) {
    case STARTUP:
      uiStartup.show();
      if(uiStartup.animationDone)
        mode = TIME;
      break;
    case TIME:
      uiTime.show();
      break;
    case STOPWATCH:
      uiStopwatch.show();
      break;
    case TEMPERATURE:
      uiTemperature.show();
      break;   
  }

  button_h.read();
  button_m.read();
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

void onButtonH() {
  switch(mode) {
    case STARTUP:
      break;
    case TIME:
      rtc.adjust(rtc.now() + TimeSpan(3600));
      uiTime.showNow();
      break;
    case STOPWATCH:
      uiStopwatch.onButtonResetSplit();
      break;
    case TEMPERATURE:
      break;
  }
}

void onButtonHLong() {
  switch(mode) {
    case STARTUP:
      break;
    case TIME:
      mode = STOPWATCH;
      break;
    case STOPWATCH:
      mode = TEMPERATURE;
      break;
    case TEMPERATURE:
      mode = TIME;
      break;
  }
}

void onButtonM() {
  switch(mode) {
    case STARTUP:
      break;
    case TIME:
      rtc.adjust(rtc.now() + TimeSpan(60));
      uiTime.showNow();
      break;
    case STOPWATCH:
      uiStopwatch.onButtonStartStop();
      break;
    case TEMPERATURE:
      break;
  }
}

void onButtonMLong() {
  switch(mode) {
    case STARTUP:
      break;
    case TIME:
      uiTime.changeFont();
      uiTime.showNow();
      break;
    case STOPWATCH:
      break;
    case TEMPERATURE:
      break;
  }
}