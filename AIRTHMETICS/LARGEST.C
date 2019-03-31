/*A program to print largest among 3 numbers-Geshwar Kumar-19/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int num1,num2,num3;
		clrscr();
		printf("\nEnter three numbers:");
		printf("\nFirst number:");
		scanf("%d",&num1);
		printf("\nSecond number:");
		scanf("%d",&num2);
		printf("\nThird number:");
		scanf("%d",&num3);
		if(num1>num2)
		{
			if(num1>num3)
			{
				printf("%d,is largest number.",num1);
			}
			else
			{
				printf("%d, is largest number.",num3);
			}
		}
		else
		{
			if(num2>num3)
			{
				printf("%d, is largest number.",num2);
			}
			else
			{
				printf("%d, is largest number.",num3);
			}
		}
getch();
}
