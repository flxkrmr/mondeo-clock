#include "UiTemperature.h"


UiTemperature::UiTemperature(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2, DallasTemperature *sensors) : UiBase (u8g2) {
    this->sensors = sensors;
}

void UiTemperature::show() {
    sensors->requestTemperatures();
    float temperatureC = sensors->getTempCByIndex(0);

    char buf[320];
    sprintf(buf, "%.1f°C", temperatureC);
    u8g2->clearBuffer();
    u8g2->setFont(u8g2_font_logisoso26_tf);
    u8g2->drawUTF8(15,32,buf);

    u8g2->sendBuffer();
}