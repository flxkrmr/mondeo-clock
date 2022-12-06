#include "UiStartup.h"

UiStartup::UiStartup(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2) {
    this->u8g2 = u8g2;
}

void UiStartup::init() {
    animationDone = false;
}

void UiStartup::show() {
    showFordLogo();
    delay(1500);
    showMondeoLogo();
    delay(1500);
    animationDone = true;
}

void UiStartup::showFordLogo() {
    u8g2->clearBuffer();
    u8g2->drawXBM(30, 0, BITMAP_FORD_WIDTH, BITMAP_FORD_HEIGHT, bitmapFord);
    u8g2->sendBuffer();
}

void UiStartup::showMondeoLogo() {
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, BITMAP_MONDEO_WIDTH, BITMAP_MONDEO_HEIGHT, bitmapMondeo);
    u8g2->sendBuffer();
}