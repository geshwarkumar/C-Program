/*Program to demonstrate putc() function
-Geshwar Kumar
-29/11/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch='G'; //character type declaration
	clrscr();
	printf(" <<< Program to demostrate putc() >>>");
	printf("\n DEFINITION: It is used to display single character.");
	printf("\n\n SYMNTAX : putc(character_variable,stdout);");
	printf("\n EXAMPLE : ");
	printf(" Given character is : ");
	putc(ch,stdout);
	printf("\n EVALUATE : putc(ch,stdout);\n\t Where ch is character variable like char ch='G';");

getch();
}