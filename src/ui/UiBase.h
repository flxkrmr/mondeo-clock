#pragma once

#include <U8g2lib.h>

class UiBase {
    public:
        UiBase(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2);
        virtual void show();

    protected:
        U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2; 
};