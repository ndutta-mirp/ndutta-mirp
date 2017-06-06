int displayWidth = 500;
int displayHeight = 500;
int num=5;
int radius=10;
float circlegap=2*radius;
void setup() {
size(displayWidth,displayHeight);
}
void draw() {
  background(255);
fill(0);
  ellipse(mouseX, mouseY, 50, 50);
//drawcircles(radius,num);
}