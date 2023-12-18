#include <AFMotor.h>


AF_DCMotor motor1(3);
AF_DCMotor motor2(4);


int data;
bool HOLD = false;
int LAST = -1;


void setup() {
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  Serial.begin(9600);
  Serial.println("Motor Started! BROOM BROOM!");
}


void loop() {
 
  Serial.println(data);
  delay(100);
 
  while (Serial.available() > 0) {
    data = Serial.read();
    Serial.println(data);
    if (HOLD and data != LAST){
      HOLD = false;
      motor1.run(RELEASE);
      motor2.run(RELEASE);
      } else {
        if (data == 70) {
          motor1.run(FORWARD);
          motor2.run(FORWARD);
          Serial.println("FORWARD");
          Serial.println("FORWARD");
          HOLD = true;
          LAST = data;
        }
        if (data == 66) {
          motor1.run(BACKWARD);
          motor2.run(BACKWARD);
          Serial.println("BACKWARD");
          HOLD = true;
          LAST = data;


        }
        if (data == 82) {
          motor1.run(FORWARD);
          motor2.run(BACKWARD);  
          Serial.println("RIGHT");
          HOLD = true;
          LAST = data;
        }
        if (data == 76) {
          motor1.run(BACKWARD);
          motor2.run(FORWARD);
          Serial.println("LEFT");
          HOLD = true;
          LAST = data;
        }
      }
    }
  }
