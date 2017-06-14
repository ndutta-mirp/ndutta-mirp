float previousError = 0.0, currentError,derivative;
float angleError = 0.02;
void solution (){
  currentError=desiredX-ballX;
  float Kp=0.0004;
  float Kd=0.009;
  int dt=1;
  delay(dt);
  derivative=(currentError-previousError)/dt;
  float angleValue=(Kp*currentError)+(Kd*derivative);
  gotoAngle(angleValue);
  previousError=currentError;

}