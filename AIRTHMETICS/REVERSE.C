/*A program to reverse a five digit number-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int num,a,b,c,d;
		clrscr();
		printf("\n Enter the five digit number:");
		scanf("%d",&num);
		a=num%10;
		num=num/10;
		b=num%10;
		num=num/10;
		c=num%10;
		num=num/10;
		d=num%10;
		num=num/10;
		printf("\nReverse of five digit number is:%d%d%d%d%d",a,b,c,d,num);
getch();
}
