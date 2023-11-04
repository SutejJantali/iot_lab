const int tp=7;
const int ep=6;
const int lp=13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tp,OUTPUT);
  pinMode(ep,INPUT);
  pinMode(lp,OUTPUT);
}
long duration,inches;

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(tp,HIGH);
  delayMicroseconds(2);
  digitalWrite(tp,LOW);
  delayMicroseconds(10);
  digitalWrite(tp,LOW);

  duration = pulseIn(ep,HIGH);
  inches=mstoinches(duration);
  Serial.print(inches);
  Serial.println("in");
  digitalWrite(lp,inches<=100);
  delay(100);
}

long mstoinches(long ms){
  return ms /74/2;  
}
