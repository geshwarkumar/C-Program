/*Program to demonstrate scanf() function
-Geshwar Kumar
-28/11/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	clrscr();
	printf(" Program to demostrate scanf():");
	printf("\n SYMNTAX : scanf(/""control string/"",list of arguments);");
	printf("Example : ");
	printf("\n Enter any number:");
	scanf("%d",&num);
	printf("\n OUTPUT : Entered number is:%d",num);

getch();
}