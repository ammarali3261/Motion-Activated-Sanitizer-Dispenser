#include<Servo.h>   

int sensorPin = 7; 
int servoPin = 9; 
int ir;
Servo servo;

void setup() {
  pinMode(sensorPin, INPUT);
  servo.attach(servoPin);
  servo.write(120);
}
 
void loop() {
  ir = digitalRead(sensorPin);
  if(ir == LOW){
    servo.write(60
    );
    delay(750);
    servo.write(120);
    delay(750);
    delay(1000);
    }
}
  
