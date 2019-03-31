#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	setcolor(GREEN);
	line(200,50,200,120);
	line(200,50,170,120);
	line(170,120,200,120);

	setcolor(YELLOW);
	line(205,50,205,120);
	line(205,50,235,120);
	line(235,120,205,120);

	setcolor(BLUE);
	line(167,125,130,195);
	line(130,195,200,195);
	line(200,195,200,125);
	line(200,125,167,125);

	setcolor(RED);
	line(205,125,205,195);
	line(205,195,273,195);
	line(273,195,238,125);
	line(238,125,205,125);

	getch();
	closegraph();

}