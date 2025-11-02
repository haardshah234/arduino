int speedPin = 5, dir1Pin = 4, dir2Pin = 3, mSpeed = 255, dt = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode(speedPin,OUTPUT);
  pinMode(dir1Pin, OUTPUT);
  pinMode(dir2Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dir1Pin,HIGH);
  digitalWrite(dir2Pin,LOW);
  analogWrite(speedPin,mSpeed);
  delay(dt);
  digitalWrite(dir1Pin,LOW);
  digitalWrite(dir2Pin,HIGH);
  delay(dt);
}
