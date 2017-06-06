int white=255, black=0;
void drawTarget(float x,float y, int N){
  fill(white);
  for(int i=N; i>0;i--){
    if(i%2==0)
      fill(white);
      else
      fill(black);
      ellipse(x,y,2*radius*i,2*radius*i);
  }
}