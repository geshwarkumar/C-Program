/*Program to pass structure as an argument in a function
-Geshwar Kumar
-03/11/2015*/

#include<stdio.h>
#include<conio.h>
//void fun(struct);
struct Demo     //Structure variable definition
{
	int num1;
};
void fun(struct Demo d1)
{
	//d1.num1=20;
	printf("\n This is function with passing structure var.\n Value is :%d",d1.num1);
}
void main()
{
	struct Demo d1;
	clrscr();
	d1.num1=20;
	printf("\n This is main function.");
	fun(d1);
getch();
}