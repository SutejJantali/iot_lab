int  val = 0;
int postpin = 0;
int ledpin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(postpin);
  Serial.println(val);
  analogWrite(ledpin,val);
  delay(10);
}
