#include "UiStopwatch.h"

UiStopwatch::UiStopwatch(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2) {
    this->u8g2 = u8g2;
}

void UiStopwatch::show() {
    u8g2->setFont(u8g2_font_logisoso22_tn);
    u8g2->clearBuffer();
    unsigned long t = time();
    unsigned short tHun = t % 100;
    unsigned short tSec = (t /   1000) % 60;
    unsigned short tMin = (t /  60000) % 60;
    unsigned short tHou = (t / 360000) % 24;

    char buf[10];
    sprintf(buf, "%02d:%02d:%02d", tHou, tMin, tSec);
    u8g2->drawStr(0,27,buf);

    sprintf(buf, "%02d", tHun);
    u8g2->setFont(u8g2_font_logisoso16_tn);
    u8g2->drawStr(107,27,buf);

    if (mode == SPLIT) {
        u8g2->setFont(u8g2_font_6x12_mf );
        u8g2->drawStr(0, 32, "LAP");
    }

    u8g2->sendBuffer();
}

unsigned long UiStopwatch::time() {
    switch (mode) {
        case IDLE:
            return 0;
            break;
        case RUNNING:
            return millis() - startTime + savedTime;
            break;
        case STOPPED:
        case SPLIT:
        default:
            return savedTime;
            break;
    }
}

void UiStopwatch::onButtonStartStop() {
    switch (mode) {
        case IDLE:
            startTime = millis();
            mode = RUNNING;
            break;
        case RUNNING:
            savedTime += millis() - startTime;
            mode = STOPPED;
            break;
        case STOPPED:
            startTime = millis();
            mode = RUNNING;
            break;
        case SPLIT:
            // nothing
            break;
    }
}

void UiStopwatch::onButtonResetSplit() {
    switch (mode) {
        case IDLE:
            // nothing
            break;
        case RUNNING:
            savedTime += millis() - startTime;
            startTime = millis();
            mode = SPLIT;
            break;
        case STOPPED:
            savedTime = 0;
            mode = IDLE;
            break;
        case SPLIT:
            mode = RUNNING;
            break;
    }
}