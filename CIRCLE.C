#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
circle(200,200,100);
line(200,200,200,200);
getch();
closegraph();
}