/*A program to check intered year is leap year or not-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
main()
{
		int year;
		//clrscr();
		printf("\n Enter the year:");
		scanf("%d",&year);
		if(year % 400 == 0 || year % 4 == 0)
			{
				printf("Leap year");
			}
		else if(year % 100 == 0 || year % 400 != 0 || year % 4 != 0)
			{
				printf("Not leap year");
			}
getch();
}
