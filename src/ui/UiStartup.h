#pragma once

#include <Arduino.h>
#include <RTClib.h>
#include <U8g2lib.h>
#include "UiBase.h"

extern "C"
{
  #include "bitmapMondeo.h"
  #include "bitmapFord.h"
}

class UiStartup : UiBase {
    public:
        UiStartup(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2) : UiBase(u8g2) {};
        void show() override;

        bool animationDone = false;

    private:
        void showFordLogo();
        void showMondeoLogo();
};