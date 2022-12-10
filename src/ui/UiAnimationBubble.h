#pragma once

#include <Arduino.h>
#include <U8g2lib.h>
#include "UiBase.h"

extern "C"
{
  #include "bubble1.h"
  #include "bubble2.h"
  #include "bubble3.h"
}


class UiAnimationBubble : UiBase {
    public:
        UiAnimationBubble(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2) : UiBase(u8g2) {};
        void show() override;
};