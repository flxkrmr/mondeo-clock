#pragma once

#include <Arduino.h>
#include <RTClib.h>
#include <U8g2lib.h>

extern "C"
{
  #include "bitmapMondeo.h"
  #include "bitmapFord.h"
}

class UiStartup {
    public:
        UiStartup(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2);
        void init();
        void show();

        bool animationDone = false;
    private:
        U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2;

        void showFordLogo();
        void showMondeoLogo();
};