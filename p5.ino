int v;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()> 0){
  v = Serial.read();
  if(v == '1'){
    Serial.println("LED ON");
    digitalWrite(13, HIGH);
    delay(2000);
  }
  else if(v == '0'){
    digitalWrite(13, LOW);
    Serial.println("LED OFF");
    delay(2000);
  }
 }
}
