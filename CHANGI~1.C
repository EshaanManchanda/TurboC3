#include <graphics.h>
void main()
{
int i;
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(6);
    for(i = 0; i <100;i++)
    {
	circle(250, 200, 50+i);
	delay(60);
	cleardevice();
    }
	getch();
	closegraph();
}
