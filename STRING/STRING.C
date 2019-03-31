/*A program to print any name-Geshwar Kumar-21/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		char name[20];
		clrscr();
		printf("\n Enter any name:");
		scanf("%[^\n]s",name);
		//gets(name);
		printf("\n Welcome ");
		puts(name);
getch();
}
