#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#define height getmaxy()
#define width getmaxx()
void main()
{
int a=49;
int gro=height-100;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

for(a=0;a<=50;a=a+1)
{
setcolor(5);
circle(a,height-200,10);
arc(30+a,height-160,138,200,50);
line(-18+a,gro-45,-25+a,gro);
line(-18+a,gro-45,-5+a,gro-30);
line(-5+a,gro-30,-30+a,gro-10);
line(50-(a/2),100,59-(a/2),100);
line(20-(a/2),300,29-(a/2),300);
line(0,gro,width,gro);

}
getch();
closegraph();
}