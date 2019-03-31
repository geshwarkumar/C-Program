/*Program to variable declaration:global variable-Geshwar Kumar-07/10/2015*/
#include<stdio.h>
#include<conio.h>

int num;	//Global variable declaration integer type
float num1;     //Global variable declaration float type
char ch;        //Global variable declaration character type

void main()
{
	clrscr();
	num=10;         //value assign
	num1=2.5;	//value assign
	ch='g';		//value assign
	printf("\n Number %d\n Number %f\n Character %c",num,num1,ch);
getch();
}

