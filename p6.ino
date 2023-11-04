#include <SimpleDHT.h>
int pin=8;
SimpleDHT11 dht11(pin);

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("SampleDHT11");
  byte temp=0;
  byte humidity=0;
  int err=SimpleDHTErrSuccess;
  if((err=dht11.read(&temp,&humidity,NULL))!=SimpleDHTErrSuccess){
    Serial.print("Read DHT11 failed,err=");
    Serial.print(SimpleDHTErrCode(err));
    Serial.print(",");  
    Serial.println(SimpleDHTErrDuration(err));
    delay(1000);
    return;
  }
  Serial.print("Sample Ok:");
  Serial.print((int) temp);
  Serial.print("*C,");
  Serial.print((int) humidity);
  Serial.print("H");
  if(temp>0){
    digitalWrite(13,HIGH);  
  }else{
    digitalWrite(13,LOW);  
  }
  delay(3000);
}
