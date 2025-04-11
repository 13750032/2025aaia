//week06_4a_fishX_fishY_dx_dy_dist
void setup() {
  size(600, 400);//開啟400x400的視窗
}
float []x=new float[100];
float []y=new float[100];
int N=0;
void draw() {
  background(#C0FFEE);
   for(int i=0;i<N;i++){
     ellipse(x[i],y[i],8,8);
   }
}
void mousePressed(){
  x[N]=mouseX;
  y[N]=mouseY;
  N++;
}
