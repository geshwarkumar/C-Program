/*Program to implement strcat()-02/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

	char str1[10],str2[10];
	clrscr();
	printf("\n Enter first string:");
	scanf("%s",&str1);
	printf("\n Enter second string:");
	scanf("%s",&str2);
	printf("\n Concatenet of %s and %s",str1,str2);
	printf(" is %s.",strcat(str1,str2));

getch();
}