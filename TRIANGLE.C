#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
//Triangle
line(200,300,300,300);
line(200,300,250,200);
line(250,200,300,300);
getch();
closegraph();
}