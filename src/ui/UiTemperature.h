#pragma once

#include <Arduino.h>
#include <U8g2lib.h>
#include <DallasTemperature.h>
#include "UiBase.h"

class UiTemperature : UiBase {
    public:
        UiTemperature(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2, DallasTemperature *sensors);
        void show() override;

    private:
        DallasTemperature *sensors;
};