/*
 Name:		Futbolin_Ekaitza.ino
 Created:	04/12/2020 22:27:12
 Author:	Erik
*/
#include "Lcd_defines.h"

char displayBuffer[12] = "TE QUIERO";
MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup(void)
{
    Serial.begin(115200);
    P.begin();
    P.setIntensity(6);
}

void loop(void)
{
    if (P.displayAnimate()) {

        P.displayText(displayBuffer, PA_CENTER, 100, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
         Serial.println(F("X"));
    }
}