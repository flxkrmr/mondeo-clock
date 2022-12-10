#include "UiStartup.h"

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