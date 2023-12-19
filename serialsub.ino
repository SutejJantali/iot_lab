void setup()
{
  pinMode(13, OUTPUT); 
  Serial.begin(9600);
  Serial.println("0 - OFF\n1 - ONN");
}
void loop()
{
  if(Serial.available())
  {
    char letter = Serial.read();
    if(letter == '0')
    {
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
    }
    else if(letter == '1')
    {
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
    }
  }
}