//This c++ code is generated by PictoBlox

//Included Libraries
#define LILYGO_WATCH_2019_WITH_TOUCH
#include <LilyGoWatch.h>
#include <esp32PWMUtilities.h>

//MACROS are defined here
TTGOClass *ttgo;
Servo Servo25;
Servo Servo26;

//Gloabl Variables are declared here
float servo1;
float servo2;

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
  servo1 = 45;
  servo2 = 45;
}

void loop() {
  //put your main code here, to run repeatedly:
  
  
  for(int i = 0; i < 4; i++) {
    ttgo->tft->setCursor(10, 100);
    ttgo->tft->print(servo1);
    ttgo->tft->setCursor(100, 100);
    ttgo->tft->print(servo2);
    Servo25.write(servo1);
    Servo26.write(servo2);
    servo1 += 10;
    servo2 += -10;
    delay(1 * 1000);
    ttgo->tft->fillScreen(0);
  }
  for(int i = 0; i < 4; i++) {
    ttgo->tft->setCursor(10, 100);
    ttgo->tft->print(servo1);
    ttgo->tft->setCursor(100, 100);
    ttgo->tft->print(servo2);
    Servo25.write(servo1);
    Servo26.write(servo2);
    servo1 += -10;
    servo2 += 10;
    delay(1 * 1000);
    ttgo->tft->fillScreen(0);
  }
}