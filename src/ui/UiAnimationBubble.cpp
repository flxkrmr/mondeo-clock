#include "UiAnimationBubble.h"

void UiAnimationBubble::show() {
    u8g2->clearBuffer();
    u8g2->drawXBM(30, 0, bubble_2_width, bubble_2_height, bubble_2_bits);
    u8g2->sendBuffer();
    delay(100);
    u8g2->clearBuffer();
    u8g2->drawXBM(30, 0, bubble_1_width, bubble_1_height, bubble_1_bits);
    u8g2->sendBuffer();
    delay(100);
    u8g2->clearBuffer();
    u8g2->drawXBM(30, 0, bubble_2_width, bubble_2_height, bubble_2_bits);
    u8g2->sendBuffer();
    delay(100);
    u8g2->clearBuffer();
    u8g2->drawXBM(30, 0, bubble_3_width, bubble_3_height, bubble_3_bits);
    u8g2->sendBuffer();
    delay(100);
}