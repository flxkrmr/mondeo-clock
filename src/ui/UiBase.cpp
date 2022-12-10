#include "UiBase.h"

UiBase::UiBase(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2) {
    this->u8g2 = u8g2;
}

void UiBase::show() {
    // nothing
}