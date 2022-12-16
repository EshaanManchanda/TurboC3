#include <graphics.h>
void main()
{
    int i,j;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    for(i=0;i<=12;i++)
    {
	
    for(j=0;j<=15;j++)
    {
	circle(250,250,100);
    setfillstyle(i,j);
	floodfill(250,250,WHITE);
    delay(500);
    cleardevice();
    }
    }

	getch();
	closegraph();
}
