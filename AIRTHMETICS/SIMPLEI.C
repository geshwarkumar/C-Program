/*A program to calculate simple interest-Geshwar Kumar-19/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int pr,rate,time;
		float si;
		clrscr();
		printf("\nEnter principle:");
		scanf("%d",&pr);
		printf("\nEnter rate:");
		scanf("%d",&rate);
		printf("\nEnter time:");
		scanf("%d",&time);
		si=pr*rate*time/100;
		printf("Simple Interest is:%.2f",si);
getch();
}
