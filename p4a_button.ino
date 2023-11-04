const int bp=2;
const int lp=13;
int buttonstate=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(lp,OUTPUT);
  pinMode(bp,INPUT);
  digitalWrite(bp,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bp=digitalRead(bp);
  if(bp==LOW){
      digitalWrite(lp,HIGH);
  }else{
      digitalWrite(lp,LOW);
    }
}
