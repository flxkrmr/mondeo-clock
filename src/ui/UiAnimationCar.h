#pragma once

#include <Arduino.h>
#include <U8g2lib.h>

extern "C" {
    #include "goofy_car_0.xbm"
    #include "goofy_car_1.xbm"
    #include "goofy_car_2.xbm"
    #include "goofy_car_3.xbm"
    #include "goofy_car_4.xbm"
    #include "goofy_car_5.xbm"
    #include "goofy_car_6.xbm"
    #include "goofy_car_7.xbm"
    #include "goofy_car_8.xbm"
    #include "goofy_car_9.xbm"
}

class UiAnimationCar {
    public:
        UiAnimationCar(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2);
        void show();

    private:
        U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2; 

        unsigned long delayMs = 150;   
};