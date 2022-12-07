#pragma once

#include <Arduino.h>
#include <U8g2lib.h>

class UiStopwatch {
    public:
        UiStopwatch(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2);
        void show();

        void onButtonStartStop();
        void onButtonResetSplit();

    private:
        U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2;

        unsigned long time();
    
        unsigned long startTime = 0;
        unsigned long savedTime = 0;

        enum Mode {
            IDLE,
            RUNNING,
            SPLIT,
            STOPPED
        } mode = IDLE;
};