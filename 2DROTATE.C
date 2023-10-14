#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

int x1,y1,x2,y2,x3,y3;

void drawshape(int,int,int,int);
void rotation(int);

void main(){
  int gd=DETECT,gm,theta;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 clrscr();
 x1=50; y1=50; x2=300; y2=300;

 drawshape(x1,y1,x2,y2);

 printf(" ENTER THETA ---> ");
 scanf("%d",&theta);

 rotation(theta);

getch();
closegraph();

}

void drawshape(int x1, int y1, int x2, int y2){
 line(x1,y1,x2,y2);
 line(x2,y2,x3,y3);
}
void rotation(int theta)
{
 float newx1 , newy1 , newx2 , newy2;

 // convert angle in degree and rotate point

 newx1 = x1*cos(theta*3.14/180) - y1*sin(theta*3.14/180);
 newy1 = x1*sin(theta*3.14/180) + y1*cos(theta*3.14/180);
 newx2 = x2*cos(theta*3.14/180) - y2*sin(theta*3.14/180);
 newy2 = x2*sin(theta*3.14/180) + y2*cos(theta*3.14/180);

     drawshape(newx1, newy1 , newx2 , newy2);



}