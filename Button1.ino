int LED = 13;
int SW1=A0;
int SW2 = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(SW1, INPUT);
  digitalWrite(SW1, HIGH);
  pinMode(SW2, INPUT);
  digitalWrite(SW2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
 int sw1 = digitalRead(SW1);
 int sw2 = digitalRead(SW2);
 if(sw1 == LOW)
 {
  digitalWrite(LED,HIGH);
 }
  if(sw2 == LOW)
 {
  digitalWrite(LED,LOW);
 }
 
}
