/*A program to calculte the total salary of employee-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		float bs,da,hra,ts,te=3000;
		clrscr();
		printf("\n Enter basic salary of a employee:");
		scanf("%f",&bs);
		da=bs*40/100;//For Dearness allowence
		hra=bs*20/100;//For Hopme rent allowence
		ts=bs+da+hra+te;//Here te=tranding expencess
		printf("\nTotal salary of employee are:%.3f",ts);
getch();
}
