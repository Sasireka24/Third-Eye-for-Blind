int trigerpin = 12;
int echopin = 11;
int buz = 3;
long duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(trigerpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(buz,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigerpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigerpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigerpin,LOW);
  duration = pulseIn(echopin,HIGH);
  distance = duration*0.034/2;
  Serial.println(distance);
  if(distance>0 && distance<10)
  {
    analogWrite(buz,255);
    
  }
  if(distance>10 && distance<50)
  {
    analogWrite(buz,30);
  }
  if(distance>50 && distance<1000)
  {
    analogWrite(buz,0);
  }
}
  
  
  
  // put your main code here, to run repeatedly:
