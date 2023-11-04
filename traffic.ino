#define red 9
#define green 8
#define yellow 7 

void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(yellow,OUTPUT);

}

void lights(int v1,int v2,int v3){
  digitalWrite(v1,HIGH);
  digitalWrite(v2,LOW);
  digitalWrite(v3,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
lights(red,green,yellow);
delay(1000);
lights(green,red,yellow);
delay(1000);
lights(yellow,green,red);
delay(1000);

}
