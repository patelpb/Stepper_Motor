#include <Stepper.h>

const int stepsPerRevolution = 32;

Stepper myStepper(stepsPerRevolution, D1, D3, D2, D4);

void setup() {
  Serial.begin(115200);
  myStepper.setSpeed(700);
  
  for(int i = 0;i < 9;i++){
    Serial.printf("Step %d\n", i);
    myStepper.step(32*64);
  }
  
}

void loop() {

}
