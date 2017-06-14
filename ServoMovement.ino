#include<Servo.h>
int yServoPin=2;
int xServoPin=3;
Servo ServoX, ServoY;
int mx=120, mn=60;
void setup() {
  ServoX.attach(xServoPin);
  ServoY.attach(yServoPin);
  // put your setup code here, to run once:

}

void loop() {
  for(int i=mn;i<mx;++i){
  ServoX.write(i);
  ServoY.write(i);
  delay(40);
  }
  delay(1000);
  for(int i=mx;i>mn;--i){
  ServoX.write(i);
  ServoY.write(i);
  delay(40);
  }
  // put your main code here, to run repeatedly:

}
