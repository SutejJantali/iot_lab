#include<Stepper.h>

const int spr=200;
Stepper myStepper(spr,8,9,10,11);

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(60);
  Serial.begin(9600);
}

void loop() {
   //put your main code here, to run repeatedly:
  Serial.println("Clockwise");
  myStepper.step(spr);
  delay(500);
  
  Serial.println("Counterclockwise");
  myStepper.step(-200);
  delay(500);
}
