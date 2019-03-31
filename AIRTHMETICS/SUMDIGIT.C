/*A program to calculate sum of digit-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int num,sum=0,temp;
		clrscr();
		printf("\n Enter the number:");
		scanf("%d",&num);
		temp=num%10;
		sum=temp;
		num=num/10;
		temp=num%10;
		sum=sum+temp;
		num=num/10;
		temp=num%10;
		sum=sum+temp;
		printf("\nSum of digits of entered number is:%d",sum);
getch();
}
