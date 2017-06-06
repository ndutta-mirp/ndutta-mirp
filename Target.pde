int displayWidth=1000;
int displayHeight=800;
float radius=10;
int numcircles=10;
void setup(){
  size(displayWidth,displayHeight);
}
void draw(){
  if(mousePressed){
  drawTarget(mouseX,mouseY,numcircles);
  delay(200);
  }
}