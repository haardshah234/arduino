#include <Stepper.h>
int spR = 2048;
int motSpeed = 10;
int dt = 2000;
//spR means steps per Revolution. This is rated on the body of the motor itself.
Stepper myStepper(spR,A1,A3,A2,A4);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(spR);
  delay(dt);
  myStepper.step(-spR);
  delay(dt);
}
