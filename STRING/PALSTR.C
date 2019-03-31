/*Program to check given string is palindrome or not using string function-02/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

	char str[10],rev[10];
	clrscr();
	printf("\n Enter any string:");
	scanf("%[^\n]s",&str);
	strcpy(rev,str);
	strrev(rev);
	if(strcmp(str,rev)==0)
	{
		printf("%s is palindrome.",str);
	}
	else
	{
		printf("%s is not a palindrome.",str);
	}

getch();
}