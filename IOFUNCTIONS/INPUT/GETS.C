/*Program to demonstrate gets() function
-Geshwar Kumar
-29/11/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[10]; //character array type declaration
	clrscr();
	printf(" <<< Program to demostrate gets() >>>");
	printf("\n DEFINITION: It is used to read a string of character including white spaces.");
	printf("\n\n SYMNTAX : gets(str);\n\t Where str is character array.just like \"char str[10]\".");
	printf("\n EXAMPLE : ");
	printf("Enter any string : ");
	gets(str);
	printf(" EVALUATE : gets(str);");
	printf("\n OUTPUT : Given string is:%s",str);
	printf("\n EVALUATE : printf(\"Given string is : %%s\",str);");

getch();
}