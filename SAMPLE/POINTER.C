#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,*P1,*P2,X,Y;
	clrscr();
	a=12;
	b=4;
	P1=&a;
	P2=&b;
	X=*P1 * *P2-6;
	Y=4 * -*P2 / *P1 + 10;
	printf("\n a=%d\tb=%d\n",a,b);
	printf(" X=%d\tY=%d",X,Y);
getch();
}