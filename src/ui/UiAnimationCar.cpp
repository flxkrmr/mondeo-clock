#include "UiAnimationCar.h"

UiAnimationCar::UiAnimationCar(U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C *u8g2) {
    this->u8g2 = u8g2;
}

void UiAnimationCar::show() {
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_0_width, goofy_car_0_height, goofy_car_0_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_1_width, goofy_car_1_height, goofy_car_1_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_2_width, goofy_car_2_height, goofy_car_2_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_3_width, goofy_car_3_height, goofy_car_3_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_4_width, goofy_car_4_height, goofy_car_4_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_5_width, goofy_car_5_height, goofy_car_5_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_6_width, goofy_car_6_height, goofy_car_6_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_7_width, goofy_car_7_height, goofy_car_7_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_8_width, goofy_car_8_height, goofy_car_8_bits);
    u8g2->sendBuffer();
    delay(delayMs);
    u8g2->clearBuffer();
    u8g2->drawXBM(0, 0, goofy_car_9_width, goofy_car_9_height, goofy_car_9_bits);
    u8g2->sendBuffer();
    delay(delayMs);
}