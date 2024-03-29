#define echopin 2
#define trigpin 3
 long duration;
  int distance;
void setup() {
  
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  Serial.print("utlrasonic sensor test");
  Serial.print(sizeof(long));

}

void loop() {
  digitalWrite(trigpin,0);
  delayMicroseconds(2);
  digitalWrite(echopin,1);
  delayMicroseconds(10);
  digitalWrite(trigpin,0);
  duration = pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance");Serial.print(distance);Serial.print("cm");  

}
