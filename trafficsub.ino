void setup()
{
  pinMode(0, OUTPUT); // red
  pinMode(1, OUTPUT); // yellow
  pinMode(2, OUTPUT); // green
}

void light_on(int pin1, int pin2, int pin3)
{
  digitalWrite(pin1, HIGH); 
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW); 

}
void loop()
{
  light_on(0, 1, 2);
  delay(2000);

  light_on(1, 0, 2);
  delay(2000);

  light_on(2, 0, 1);
  delay(2000); 
}