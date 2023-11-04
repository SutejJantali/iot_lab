#include<Stepper.h>
const int spr=200;
Stepper myStepper(spr,8,9,10,11);
int stepCount=0;

 void setup(){
 myStepper.setSpeed(60);
 Serial.begin(9600);
 }
void loop(){
Serial.println("Clockwise");
myStepper.step(spr);
delay(500);
Serial.println("anti-Clockwise");
myStepper.step(-spr);
delay(500);
 
}
  
