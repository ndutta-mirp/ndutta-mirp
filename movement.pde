int displayWidth=800, displayHeight=600;

float MAX_VELOCITY = 10;

float bgColor = 0;

float gravity = 0;
float ballX, ballY;
float ballVx = 0, ballVy = 0;
float ballRadius = 10;
color ballColor = color(255, 255, 255, 150);

float restitutionCoeff = 0.5;

char UP = 'w', LEFT = 'a', RIGHT = 'd', DOWN = 's';
boolean up, left, right,down;

boolean keys[] = new boolean [4];

void setup() {
  size(displayWidth, displayHeight);
  ballX=displayWidth/2;
  ballY=displayHeight/2;
  ballVx = 1;
  ballVy = 1;
}

void draw() {
  background(bgColor);
  detectKeys();
  drawBall();
  updateBallVelocity();
  updateBallPosition();
  resolveCollisions();
}

void drawBall() {
  fill(ballColor);
  ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
}