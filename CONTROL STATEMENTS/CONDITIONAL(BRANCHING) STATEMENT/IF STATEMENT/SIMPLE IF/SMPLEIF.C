/* Program to demonstrate smple if statement
-Geshwar Kumar
-01/12/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{

	int num;
	clrscr();
	printf("<<< PROGRAM TO DEMONSTRATE SIMPLE IS STATEMENT >>>");
	printf("\nUSE : it is used to execute single or more statement block dependimg on condition.It contains single statement block.");
	printf("\n\nSYNTAX :\n\t if(condition)\n\t {\n\t\t <inside_staement_block>;\n\t }\n\t <outside_statement_block>;");
	printf("\n\nEXAMPLE: /*PRORAM TO FIND GIVEN VALUE IS GREATER THEN 10*/");
	printf("\n\t Enter any number:");scanf("%d",&num);
	if(num > 10)
	{
		printf("\t OUTPUT :\n\t %d is greater then 10.",num);
	}
	printf("\n\t this is out side block.");
	printf("\n\nEVALUATE :\n\t if(num > 10)\n\t {\n\t\t printf(\"%%d is greater then 10\",num);\n\t }\n\t prinf(\"out side statements.\");");

getch();
}