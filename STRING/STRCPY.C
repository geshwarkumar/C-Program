/*Program to implement strcpy()-02/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

	char str1[10],str2[10];
	clrscr();
	printf("\n Enter any string:");
	scanf("%[^\n]s",str1);
	strcpy(str2,str1);
	printf("\n Before copy, string is:%s",str1);
	printf("\n After copy, string is:%s",str2);

getch();
}