/*Program to demonstrate getchar() function
-Geshwar Kumar
-29/11/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch; //Character type declaration
	clrscr();
	printf(" <<< Program to demostrate getchar() >>>");
	printf("\n DEFINITION: It is used for input single character at a time.");
	printf("\n\n SYMNTAX : character_varaiable = getchar();");
	printf("\n EXAMPLE : ");
	printf("Enter any character : ");
	ch=getchar();
	printf(" EVALUATE : ch = getchar();");
	printf("\n OUTPUT : Given character is:%c",ch);

getch();
}