#include "UiTime.h"

UiTime::UiTime(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2, RTC_DS1307 *rtc) {
    this->u8g2 = u8g2;
    this->rtc = rtc;
}

void UiTime::show() {
    unsigned long now = millis();
    if (now - lastUpdate > refreshCycleMs) {
        lastUpdate = now;
        showNow();
    }
}

void UiTime::showNow() {
    char delim = millis() % 1000 > 500 ? ':' : ' ';

    DateTime now = rtc->now();

    switch (font) {
        case LOGISOSO:
            drawTimeLogisoso(now, delim);
            break;
        case INR:
            drawTimeInr(now, delim);
            break;
        case INB:
            drawTimeInb(now, delim);
            break;
        case MYSTERY:
            drawTimeMystery(now, delim);
            break;
        case OSR:
            drawTimeOsr(now, delim);
            break;
    }
}

void UiTime::changeFont() {
    switch (font) {
        case LOGISOSO:
            font = INR;
            break;
        case INR:
            font = INB;
            break;
        case INB:
            font = MYSTERY;
            break;
        case MYSTERY:
            font = OSR;
            break;
        case OSR:
            font = LOGISOSO;
            break;
    }
}

void UiTime::drawTimeLogisoso(DateTime time, char delim) {
    u8g2->setFont(u8g2_font_logisoso32_tn);
    u8g2->clearBuffer();

    char buf[10];
    sprintf(buf, "%02d", time.hour());
    u8g2->drawStr(15,32,buf);
    sprintf(buf, "%c", delim);
    u8g2->drawStr(60,32,buf);
    sprintf(buf, "%02d", time.minute());
    u8g2->drawStr(75,32,buf);

    u8g2->sendBuffer();
}

void UiTime::drawTimeInr(DateTime time, char delim) {
    u8g2->setFont(u8g2_font_inr30_mn);
    u8g2->clearBuffer();

    char buf[10];
    sprintf(buf, "%02d%c%02d", time.hour(), delim, time.minute());
    u8g2->drawStr(0,32,buf);

    u8g2->sendBuffer();
}

void UiTime::drawTimeInb(DateTime time, char delim) {
    u8g2->setFont(u8g2_font_inb30_mn);
    u8g2->clearBuffer();

    char buf[10];
    sprintf(buf, "%02d", time.hour());
    u8g2->drawStr(15,32,buf);
    sprintf(buf, "%c", delim);
    u8g2->drawStr(60,28,buf);
    sprintf(buf, "%02d", time.minute());
    u8g2->drawStr(80,32,buf);

    u8g2->sendBuffer();
}

void UiTime::drawTimeMystery(DateTime time, char delim) {
    u8g2->setFont(u8g2_font_mystery_quest_42_tn);
    u8g2->clearBuffer();

    char buf[10];
    sprintf(buf, "%02d", time.hour());
    u8g2->drawStr(15,31,buf);
    sprintf(buf, "%c", delim);
    u8g2->drawStr(66,23,buf);
    sprintf(buf, "%02d", time.minute());
    u8g2->drawStr(80,31,buf);

    u8g2->sendBuffer();
}

void UiTime::drawTimeOsr(DateTime time, char delim) {
    u8g2->setFont(u8g2_font_osr29_tn);
    u8g2->clearBuffer();

    char buf[10];
    sprintf(buf, "%02d", time.hour());
    u8g2->drawStr(15,30,buf);
    sprintf(buf, "%c", delim);
    u8g2->drawStr(66,28,buf);
    sprintf(buf, "%02d", time.minute());
    u8g2->drawStr(80,30,buf);

    u8g2->sendBuffer();
}