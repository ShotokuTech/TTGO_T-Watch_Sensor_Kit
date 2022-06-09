//This c++ code is generated by PictoBlox

//Included Libraries
#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>
#include <esp32PWMUtilities.h>

//MACROS are defined here
TTGOClass *ttgo;
Servo Servo25;
Servo Servo26;

void setup() {
  //put your setup code here, to run once:
  ttgo = TTGOClass::getWatch();
  ttgo->begin();
  ttgo->openBL();
  ttgo->tft->init(TFT_BLACK);
  ttgo->tft->setRotation(0);
  Servo25.attach(25);
  Servo26.attach(26);
  
  
  ttgo->tft->setRotation(0);
  ttgo->tft->setTextColor(63330, 0);
  ttgo->tft->setTextSize(2);
  ttgo->tft->fillScreen(0);
}

void loop() {
  //put your main code here, to run repeatedly:
  
  
  ttgo->tft->setCursor(10, 100);
  ttgo->tft->fillScreen(0);
  ttgo->tft->print("Servo Forward");
  Servo25.write(0);
  Servo26.write(180);
  delay(3 * 1000);
  ttgo->tft->setCursor(10, 100);
  ttgo->tft->fillScreen(0);
  ttgo->tft->print("Servo Reverse");
  Servo25.write(180);
  Servo26.write(0);
  delay(3 * 1000);
}
