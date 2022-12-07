#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
line(100,100,500,100);
getch();
closegraph();
}