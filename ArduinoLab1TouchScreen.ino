int Yp=A0;
int Yn=A2;
int Xp=A1;
int Xn=A3;

void setup() {
 Serial.begin(9600);
}

void loop() {

  int x,y;
  pinMode(Yp,INPUT);
  pinMode(Yn,INPUT);
  digitalWrite(Yn,LOW);
  pinMode(Xp,OUTPUT);
  digitalWrite(Xp,HIGH);
  pinMode(Xn,OUTPUT);
  digitalWrite(Xn,LOW);
  x= analogRead(Yp);
  //Serial.print("x=");
  Serial.print(x);
  Serial.print("\t");
  

  pinMode(Xp,INPUT);
  pinMode(Xn,INPUT);
  digitalWrite(Xn,LOW);
  pinMode(Yp,OUTPUT);
  digitalWrite(Yp,HIGH);
  pinMode(Yn,OUTPUT);
  digitalWrite(Yn,LOW);
  y=analogRead(Xp);
  //Serial.print("y=");
  Serial.println(y);
  //delay(1000);
  // put your main code here, to run repeatedly:

}
