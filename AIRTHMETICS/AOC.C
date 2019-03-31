/*A program to compute the area and circumference of a circle-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
		float radius,aoc,coc;//aoc=area of circle;coc=circumference of circle
		clrscr();
		//pi=3.14;
		printf("\n Enter the radius of a circle:");
		scanf("%f",&radius);
		/*Formula for circumference*/
		coc=2*pi*radius;
		/*Formula for area of circle*/
		aoc=pi*radius*radius;
		printf("\n The circumference of a circle is:%.3f",coc);
		printf("\n The area of a circle is:%.3f",aoc);
getch();
}
