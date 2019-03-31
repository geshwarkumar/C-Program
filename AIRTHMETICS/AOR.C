/*A program to compute the area of a trangle-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int base,width,aor;//aor=area of rectangle
		clrscr();
		printf("\n Enter the Base of a rectangle:");
		scanf("%d",&base);
		printf("\n Enter the Width of a rectangle:");
		scanf("%d",&width);
		aor=base*width;
		printf("\n The area of rectangle is:%d",aor);
getch();
}
