#include<Servo.h>
#include<TouchScreen.h>
#include<PID_v1.h>
//float Ki=0.001,Kp=0.05,Kd=0.04;
float Kpx = 0.05, Kdx = 0.03, Kix = 0.01;
float Kpy = 0.05, Kdy = 0.03, Kiy = 0.01;
double INPUTx,OUTPUTx, SET_POINTx=500;
double INPUTy,OUTPUTy, SET_POINTy=530;
Servo ServoX, ServoY;
int mx=120, mn=60;
int xServoPin=2, yServoPin=3;
#define YP A0
#define XP A1
#define YM A2
#define XM A3

TouchScreen ts = TouchScreen(XP, YP, XM, YM, 711);
PID PIDx= PID(&INPUTx,&OUTPUTx,&SET_POINTx,Kpx,Kix,Kdx,REVERSE);
PID PIDy= PID(&INPUTy,&OUTPUTy,&SET_POINTy,Kpx,Kix,Kdx,REVERSE);

void setup() {
  TSPoint p = ts.getPoint();
  
  Serial.begin(9600);
  //INIT OF TOUCHSCREEN
  
  ServoX.attach(xServoPin);
  ServoY.attach(yServoPin);
  OUTPUTx=90;
  OUTPUTy=90;
  ServoX.write(OUTPUTx);
  ServoY.write(OUTPUTy);

  //PID
  PIDx.SetSampleTime(40);
  PIDy.SetSampleTime(40);
  PIDx.SetMode(AUTOMATIC);
  PIDy.SetMode(AUTOMATIC);
  
  PIDx.SetOutputLimits(mn,mx);
  PIDy.SetOutputLimits(mn,mx);
  
  //INIT SETPOINT
  
  // put your setup code here, to run once:
  delay(50);

}

void loop() {
  TSPoint p = ts.getPoint();
   if(p.z > ts.pressureThreshhold){
    INPUTx=p.x;
    INPUTy=p.y;
    PIDx.Compute(); 
    PIDy.Compute();   
   Serial.print("x=");
    Serial.print(INPUTx);
    Serial.print("\t");
     
     Serial.print(OUTPUTx);
     Serial.print("\t");
    

    
    Serial.print("y=");
    Serial.print(INPUTy);
    Serial.print("\t");
    ServoY.write(OUTPUTy);
    ServoX.write(OUTPUTx);
    Serial.println(OUTPUTy);
    
  
  
  // put your main code here, to run repeatedly:
  }
}
