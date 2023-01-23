#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
int main(void)
{

int gdriver = DETECT, gmode, errorcode;
int xmax, ymax,x1,y1,x2,y2,z,r,theta;
initgraph(&gdriver, &gmode,"C:\\TURBOC3\\BGI");
printf("Enter the X1 coordinate:\n");
scanf("%d",&x1);
printf("Enter the Y1 coordinate:\n");
scanf("%d",&y1);
printf("Enter the X2 coordinate :\n ");
scanf("%d",&x2);
printf("Enter the Y2 coordinate:\n");
scanf("%d",&y2);

line(x1,y1,x2,y2);
z=(x1*x1)+(y1*y1);
r= sqrt(z);
printf("Enter the theta:");
scanf("%f",&theta);
line((x1*cos(theta))-(y1*sin(theta)),(x1*sin(theta))-(y1*cos(theta)),x2,y2);
getch();
closegraph();
return 0;
}