/*Program to demonstrate void pointer-Geshwar Kumar-14/10/2015*/
#include<stdio.h>
#include<conio.h>
int *call(); //function declaration

void main()
{
		int *ptr;         //pointer variable
		clrscr();
		ptr=call();	//calling through pointer variable
		printf("\n Value of iter=%d Address of iter=%x",*ptr,ptr);
getch();
}
int *call()
{
		int iter=10;    //local vaeriable
		iter++;
		printf("\n Address of iter=%x",&iter);
		return &iter;
}
