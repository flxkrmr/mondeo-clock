#pragma once

#include <Arduino.h>
#include <U8g2lib.h>
#include "UiBase.h"

class UiStopwatch : UiBase {
    public:
        UiStopwatch(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2) : UiBase(u8g2) {};
        void show() override;

        void onButtonStartStop();
        void onButtonResetSplit();

    private:
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