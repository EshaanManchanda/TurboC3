#include<conio.h>
#include<stdio.h>
#include <math.h>
#include<graphics.h>
#define SIN(x) sin(x * 3.141592653589 / 180)
#define COS(x) cos(x * 3.141592653589 / 180)
#define height getmaxy()
#define width getmaxx()
void bg1();
void background1(int);
void background2();
void landing();
void entry();
void running();
void jumping();
void army();
void transform_stick();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
bg1();
getch();
closegraph();
}
void entry()
{

int a;
int gro=height-100;
for(a=0;a<=80;a=a+1)
{
setcolor(5);
circle(a,height-200,10);
arc(30+a,height-160,138,200,50);
line(-18+a,gro-45,-25+a,gro);
line(-18+a,gro-45,-5+a,gro-30);
line(-5+a,gro-30,-30+a,gro-10);
line(50-(a/2),100,59-(a/2),100);
line(20-(a/2),300,29-(a/2),300);
background1(a);
delay(1);
cleardevice();
}
}
void bg1()
{
int sec;
for(sec=0;sec<1;sec++)
{
	entry();
	running();
	jumping();
	transform_stick();
	cleardevice();
	background2();
	landing();
}
}
void running()
{
int a;
int gro=height-100;
for(a=0;a<=160;a=a+1)
{
int c=a+20;

int rlegx=60+c,rlegy=gro-10,llegx=20+c,llegy=gro-10;
setcolor(5);
circle(60+c,height-200,10);
arc(90+c,height-160,138,200,50);
if(a%2==0)
{
//right arm
line(50+c,height-190,80+c,height-170);
line(80+c,height-170,90+c,height-180);
//left arm
line(50+c,height-190,20+c,height-200);
line(20+c,height-200,15+c,height-190);
//right leg
line(42+c,gro-45,rlegx,rlegy);
line(rlegx,rlegy,rlegx+10,rlegy-5);
// left leg
line(42+c,gro-45,llegx+10,llegy-5);
line(llegx+10,llegy-5,llegx+2,llegy+10);
}
else
{
//right arm
line(50+c,height-190,60+c,height-160);
line(60+c,height-160,70+c,height-170);
//left arm
line(50+c,height-190,20+c,height-170);
line(20+c,height-170,25+c,height-160);
//right leg
line(42+c,gro-45,rlegx-10,rlegy+10);
line(rlegx-10,rlegy+10,rlegx+5,rlegy+5);
// left leg
line(42+c,gro-45,llegx+10,llegy+5);
line(llegx+10,llegy+5,llegx+20,llegy+5);
}
//line(45+a,gro-30,20+a,gro-10);
line(650-c*6,50,width-c*6,50);
line(600-c*6,150,width-c*6,150);
line(0,gro,width,gro);
background1(a+80);
delay(25);
cleardevice();
}
}
void jumping()
{
int a,k;
for(a=0;a<=100;a++)
{
k=height-a;
circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,260,k-170);
line(240,k-200,220,k-170);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);
background1(240);
delay(10);
cleardevice();
}
}
void transform_stick()
{

int i,a,k=height-100;
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
for(i=0;i<3;i++)
{
line(200,0,200,height-100);
line(0,height-100,width,height-100);
line(200,0,270,0);
line(270,0,270,height-100);
floodfill(250,height-150,RED);
//transform animantion
circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,260,k-170);
line(240,k-200,220,k-170);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);
delay(50);
cleardevice();
}
//transformed

//hair
for(a=0;a<=100;a++)
{
k=k-a;
line(230,k-210,225,k-225);
line(250,k-210,255,k-225);

line(225,k-225,235,k-225);
line(255,k-225,245,k-225);

line(235,k-225,240,k-235);
line(245,k-225,240,k-235);


circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,260,k-170);
line(240,k-200,220,k-170);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);
background1(240);
delay(10);
cleardevice();
}
}
void background1(int sync)
{
int gro=height-100;
setcolor(3);
line(0,gro,width,gro);
line(50-sync,gro-200,100-sync,gro-300);
line(150-sync,gro-200,100-sync,gro-300);

line(200-sync,gro-200,300-sync,gro-200);
line(200-sync,gro-200,200-sync,gro-250);
line(300-sync,gro-200,300-sync,gro-250);
line(200-sync,gro-250,300-sync,gro-250);
line(200-sync,gro-250,250-sync,gro-300);
line(300-sync,gro-250,250-sync,gro-300);
line(245-sync,gro-200,245-sync,gro-210);
line(255-sync,gro-200,255-sync,gro-210);
line(245-sync,gro-210,255-sync,gro-210);

line(400-sync,gro-200,500-sync,gro-200);
line(400-sync,gro-200,400-sync,gro-250);
line(500-sync,gro-200,500-sync,gro-250);
line(400-sync,gro-250,500-sync,gro-250);
line(400-sync,gro-250,450-sync,gro-300);
line(500-sync,gro-250,450-sync,gro-300);
line(445-sync,gro-200,445-sync,gro-210);
line(455-sync,gro-200,455-sync,gro-210);
line(445-sync,gro-210,455-sync,gro-210);

line(600-sync,gro-200,700-sync,gro-200);
line(600-sync,gro-200,600-sync,gro-250);
line(700-sync,gro-200,700-sync,gro-250);
line(600-sync,gro-250,700-sync,gro-250);
line(600-sync,gro-250,650-sync,gro-300);
line(700-sync,gro-250,650-sync,gro-300);
line(645-sync,gro-200,645-sync,gro-210);
line(655-sync,gro-200,655-sync,gro-210);
line(645-sync,gro-210,655-sync,gro-210);

line(800-sync,gro-200,900-sync,gro-200);
line(800-sync,gro-200,800-sync,gro-250);
line(900-sync,gro-200,900-sync,gro-250);
line(800-sync,gro-250,900-sync,gro-250);
line(800-sync,gro-250,850-sync,gro-300);
line(900-sync,gro-250,850-sync,gro-300);
line(845-sync,gro-200,845-sync,gro-210);
line(855-sync,gro-200,855-sync,gro-210);
line(845-sync,gro-210,855-sync,gro-210);


}
void background2()
{
setcolor(6);
line(0,0,20,0);
line(20,0,20,height);
line(width,0,width-20,0);
line(width-20,0,width-20,height);
floodfill(10,10,6);
floodfill(width-10,10,6);
line(0,height-100,width,height-100);

}
void landing()
{
	int k=height-200,i,a;
	for(i=0;i<=15;i++)
	{k=k+i;
line(230,k-210,225,k-225);
line(250,k-210,255,k-225);

line(225,k-225,235,k-225);
line(255,k-225,245,k-225);

line(235,k-225,240,k-235);
line(245,k-225,240,k-235);


circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,260,k-170);
line(240,k-200,220,k-170);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);
background2();
delay(25);
cleardevice();
	}
k=height;
line(230,k-210,225,k-225);
line(250,k-210,255,k-225);

line(225,k-225,235,k-225);
line(255,k-225,245,k-225);

line(235,k-225,240,k-235);
line(245,k-225,240,k-235);


circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,260,k-170);
line(240,k-200,220,k-170);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);
army();

}

void army()
{
int x=width,a;
int k=height;

for(x=width;x>=width-200;x--)
{
//main
line(230,k-210,225,k-225);
line(250,k-210,255,k-225);

line(225,k-225,235,k-225);
line(255,k-225,245,k-225);

line(235,k-225,240,k-235);
line(245,k-225,240,k-235);


circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,260,k-170);
line(240,k-200,220,k-170);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);


//army
circle(x,k-210,10);
line(x,k-200,x,k-140);

line(x,k-200,x+20,k-170);
line(x,k-200,x-20,k-170);

line(x,k-140,x+10,k-100);
line(x,k-140,x-10,k-100);
background2();
delay(60);
cleardevice();
}

for(a=0;a<=60;a++)
{
//main
line(230,k-210,225,k-225);
line(250,k-210,255,k-225);

line(225,k-225,235,k-225);
line(255,k-225,245,k-225);

line(235,k-225,240,k-235);
line(245,k-225,240,k-235);


circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,260,k-170);
line(240,k-200,260,k-160);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);

if(a%2==0){
delay(10);
line(263,k-165,width-20,k-300);
line(263,k-165,width-20,k-100);
line(width-20,k-100,width-20,k-300);
floodfill(270,k-165,6);
}

//army
circle(x,k-210,10);
line(x,k-200,x,k-140);

line(x,k-200,x+20,k-170);
line(x,k-200,x-20,k-170);

line(x,k-140,x+10,k-100);
line(x,k-140,x-10,k-100);
background2();
delay(10);
cleardevice();
}
//main
for(a=0;a<=100;a++)
{

line(230,k-210,225,k-225);
line(250,k-210,255,k-225);

line(225,k-225,235,k-225);
line(255,k-225,245,k-225);

line(235,k-225,240,k-235);
line(245,k-225,240,k-235);


circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,265,k-220);
line(240,k-200,215,k-220);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);
background2();
outtextxy(200,a-10,"Thank You For watching the project");
outtextxy(150,a-20,"This is the Project made by Eshaan Manchanda");
delay(60);
cleardevice();


}

line(230,k-210,225,k-225);
line(250,k-210,255,k-225);

line(225,k-225,235,k-225);
line(255,k-225,245,k-225);

line(235,k-225,240,k-235);
line(245,k-225,240,k-235);


circle(240,k-210,10);
line(240,k-200,240,k-140);

line(240,k-200,265,k-220);
line(240,k-200,215,k-220);

line(240,k-140,250,k-100);
line(240,k-140,230,k-100);
background2();
outtextxy(200,a-10,"Thank You For watching the project");
outtextxy(150,a-20,"This is the Project made by Eshaan Manchanda");

}