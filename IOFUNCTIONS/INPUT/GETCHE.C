/*Program to demonstrate getche() function
-Geshwar Kumar
-29/11/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch; //character array type declaration
	clrscr();
	printf(" <<< Program to demostrate getche() >>>");
	printf("\n DEFINITION: It is used to read single character from the keyboard and display immediately on output screen without waiting for enter key.");
	printf("\n\n SYMNTAX : character_variable = getrche();");
	printf("\n EXAMPLE : ");
	printf("Enter any character : ");
	ch=getche();
	printf("\n EVALUATE : ch = getche();");
	printf("\n OUTPUT : Entered character is:%c",ch);
	printf("\n EVALUATE : printf(\"Entered character is : %%c\",ch);");

getch();
}