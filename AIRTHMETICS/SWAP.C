/*A program to swap to number-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int num1,num2,temp;
		clrscr();
		printf("\n Enter two numbers:");
		scanf("%d%d",&num1,&num2);
		printf("\nBefore swapping:\nFirst number=%d\nSecond number=%d",num1,num2);
		temp=num1;
		num1=num2;
		num2=temp;
		printf("\n\nAfter swapping:\nFirst number=%d\nSecond number=%d",num1,num2);
getch();
}
