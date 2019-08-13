//liquidCrystal I2C Frank Brabander
#include "RoboCar.hpp"

Servo servo;
Ultrasonic u(pHC05_TRIGGER, pHC05_ECHO);
LightSensor l(p_LINE_1_SIGNAL,p_LINE_2_SIGNAL, p_LINE_3_SIGNAL);

void setup()
{
 Serial.begin(9600);
 servo.attach(pSERVO);
 servo.write(0); 
}

void loop() 
{
 Serial.println(l.isLine1Active());
 Serial.println(l.isLine2Active());
 Serial.println(l.isLine3Active());
 Serial.println("----");
}
