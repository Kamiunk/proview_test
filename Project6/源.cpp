#include<stdio.h>
#include<graphics.h>
int main()
{
	initgraph(800, 800);
	setbkcolor(RGB(19, 128, 113));
	cleardevice();
	setcolor(WHITE);
	setfillcolor(YELLOW);
	fillcircle(100, 100, 50);
	line(0, 0, 300, 300);
	fillrectangle(350, 300, 600, 650);
	solidrectangle(30, 300, 60, 650);
	while (1);
	closegraph();
	return 0;
}

