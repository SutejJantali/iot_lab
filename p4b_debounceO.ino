int led=13;
int sw1=A0;
int sw2=A1;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(sw1,INPUT);
  digitalWrite(sw1,HIGH);
  pinMode(sw2,INPUT);
  digitalWrite(sw2,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw1=digitalRead(sw1);
  int sw2=digitalRead(sw2);
  if(sw1==LOW){digitalWrite(led,HIGH);}
  if(sw2==LOW){digitalWrite(led,LOW);}
}
