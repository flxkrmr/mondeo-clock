#pragma once

#include <Arduino.h>
#include <RTClib.h>
#include <U8g2lib.h>

class UiTime {

    public:
        UiTime(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2, RTC_DS1307 *rtc);

        void show();

        void showNow();
        void changeFont();

    private:
        U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2;
        RTC_DS1307 *rtc;

        const unsigned short refreshCycleMs = 250;
        unsigned long lastUpdate = 0;

        enum Font {
            LOGISOSO = 0,
            INR,
            INB,
            MYSTERY,
            OSR
        };

        Font font = LOGISOSO;

        void drawTimeLogisoso(DateTime time, char delim);
        void drawTimeInr(DateTime time, char delim);
        void drawTimeInb(DateTime time, char delim);
        void drawTimeMystery(DateTime time, char delim);
        void drawTimeOsr(DateTime time, char delim);
};