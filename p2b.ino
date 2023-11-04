void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
}

void loop1(int x,int y,int z, int a){
  digitalWrite(x,HIGH);
  delay(a);
  digitalWrite(y,LOW);
  digitalWrite(z,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
loop1(13,12,11,4000);

loop1(12,11,13,2000);

loop1(11,13,12,1000);
}
