
#define LILYGO_WATCH_2019_WITH_TOUCH         // To use T-Watch2019 with touchscreen, please uncomment this line
// #define LILYGO_WATCH_2019_NO_TOUCH           // To use T-Watch2019 Not touchscreen , please uncomment this line
// #define LILYGO_WATCH_BLOCK                   // To use T-Watch Block , please uncomment this line
//#define LILYGO_WATCH_2020_V1                 // To use T-Watch2020 V1, please uncomment this line
// #define LILYGO_WATCH_2020_V2                 // To use T-Watch2020 V2, please uncomment this line
// #define LILYGO_WATCH_2020_V3                 // To use T-Watch2020 V3, please uncomment this line

#include <LilyGoWatch.h>

TTGOClass *ttgo;
TFT_eSPI *tft;

void setup() {
    ttgo = TTGOClass::getWatch();
    ttgo->begin();
    ttgo->openBL();
    tft = ttgo->tft;
    tft->fillScreen(TFT_BLACK);
    tft->setTextFont(4);
    tft->setRotation(0);
    tft->setTextColor(TFT_WHITE, TFT_BLACK);
    tft->setCursor(0, 0);
    tft->print("01234567890123456");
    tft->setCursor(0,26); 
    tft->print("01234567890123456");
    tft->setCursor(0,52); 
    tft->print("01234567890123456");
    tft->setCursor(0,78); 
    tft->print("01234567890123456");
    tft->setCursor(0,104); 
    tft->print("01234567890123456");
    tft->setCursor(0,130); 
    tft->print("01234567890123456");
    tft->setCursor(0,156); 
    tft->print("01234567890123456");
    tft->setCursor(0,182); 
    tft->print("01234567890123456");
    tft->setCursor(0,208); 
    tft->print("01234567890123456");
}

void loop() {
}
