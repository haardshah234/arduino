int redPin = 10;
int greenPin = 8;
int bluePin = 6;
int rD = 100;
int gD = 1000;
int bD = 3000;
int myD = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=5;i++)
  {
    digitalWrite(redPin, HIGH);
    delay(rD);
    digitalWrite(redPin, LOW);
    delay(rD);
  }
  for(int i=1;i<=10;i++)
  {
    digitalWrite(greenPin, HIGH);
    delay(gD);
    digitalWrite(greenPin, LOW);
    delay(gD);
  }
  for(int i=1;i<=15;i++)
  {
    digitalWrite(bluePin, HIGH);
    delay(bD);
    digitalWrite(bluePin, LOW);
    delay(bD);
  }
}
