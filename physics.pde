void updateBallVelocity() {
  ballVy += gravity;
  // Add control for movement keys here
  
}

void updateBallPosition() {
  ballX += ballVx;
  ballY += ballVy;
}

void resolveCollisions() {
  // Resolving Collisions with floor (bottom wall).
    if (ballY > displayHeight-ballRadius){
    ballY = displayHeight-ballRadius;
     ballVy = -ballVy;
  }
   if (ballY <ballRadius){
    ballY =ballRadius;
     ballVy = -ballVy;
     
  }
  if (ballX > displayWidth-ballRadius){
    ballX = displayWidth-ballRadius;
     ballVx = -ballVx;
  }
  if (ballX < ballRadius){
    ballX = ballRadius;
    ballVx = -ballVx;
  }
  
  // Resolve Collisions with all other walls.
}