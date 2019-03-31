/*Program to demonstrate puts() function
-Geshwar Kumar
-29/11/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20]="C Programmer"; //character array type declaration
	clrscr();
	printf(" <<< Program to demostrate puts() >>>");
	printf("\n DEFINITION: It is used to display character string.");
	printf("\n\n SYMNTAX : puts(character_array_variable);");
	printf("\n EXAMPLE : ");
	printf(" Given string is : ");
	puts(str);
	printf("\n EVALUATE : puts(str);\n\t Where str is character array like char str[20];");

getch();
}