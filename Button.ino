const int bp = 2;
const int lp = 13;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(lp, OUTPUT);
  pinMode(bp, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(bp);
  if(buttonState == HIGH)
  {
    digitalWrite(lp, HIGH);
  }
  else
  {
    digitalWrite(lp, LOW);
  }
}
