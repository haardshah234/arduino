int trigPin = 12, echoPin = 11, pingTravelTime, dt = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(dt);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(dt);
  digitalWrite(trigPin,LOW);
  pingTravelTime = pulseIn(echoPin,HIGH); //in microseconds
  Serial.println(pingTravelTime);
  delay(25);
}
