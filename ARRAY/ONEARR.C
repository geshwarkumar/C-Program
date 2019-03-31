/*A program to demonstrate one dimentional array-Geshwar Kumar-11/09/2015*/
#include<stdio.h>
#include<conio.h>

void main()
{
		int iter,num[5],m;
		clrscr();
		printf("How many...?\n");
		scanf("%d",&m);
		printf("Enter %d numbers:\n",m);
		for(iter=0;iter<=m;iter++)
		{
			scanf("%d",&num[iter]);
		}
		printf("Entered numbers are:\n");
		for(iter=0;iter<=m;iter++)
		{
			printf("%d\n",num[iter]);
		}

getch();
}

