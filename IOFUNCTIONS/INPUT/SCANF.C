/*Program to demonstrate scanf() function
-Geshwar Kumar
-28/11/2015*/

#include<stdio.h>
//#include<conio.h>

int main()
{
	int num;
	//clrscr();
	printf(" <<< Program to demostrate scanf() >>>");
	printf("\n DEFINITION : It allow us to hold the input data into variable.");
	printf("\n SYNTAX : scanf(\"""control string""\",list of arguments);");
	printf("\n EXAMPLE : ");
	printf("Enter any number:");
	scanf("%d",&num);
	printf(" EVALUATE : ");
	printf("scanf(\"%%d\",&num);");
	printf("\n OUTPUT : Entered number is:%d",num);
	printf("\n\n List of commonly used conversion caracters for data input:\n");
	printf("\n String format - uses - data type");
	printf("\n 1.%%c - single caracter - char");
	printf("\n 2.%%d - desimal integer - int");
	printf("\n 3.%%ld - long desimal integer - long int");
	printf("\n 4.%%f - floating point - float,double");
	printf("\n 5.%%e - floating point - float,double");
	printf("\n 6.%%g - floating point - float,double");
	printf("\n 7.%%h - short int - short int");
	printf("\n 8.%%i - decimal,hexadecimal,octal - int");
	printf("\n 9.%%o - octal integer - int");
	printf("\n 10.%%s - strint followed by white space character - char");
	printf("\n 11.%%u - unsighned decimal - int");
	printf("\n 12.%%x - hexadecimal integer - int");
return 0;
//getch();
}
