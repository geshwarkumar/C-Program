#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,b,c,d;
	clrscr();
	a=15;
	b=10;
	c=++a - b;
	printf("\n Valuues : \n a=%d\tb=%d\tc=%d",a,b,c);
	d=b++ + a;
	printf("\n a=%d\tb=%d\td=%d",a,b,d);
	printf("\n (%d>%d)=%d",c,d,(c>d)?1:0);
	printf("\n (%d<%d)=%d",c,d,(c<d)?1:0);
getch();
}