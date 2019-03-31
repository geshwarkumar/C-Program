/*Program to substraction two number*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,res;
	clrscr();//for clear screen
	printf("Enter two number:\n");
	scanf("%d%d",&num1,&num2);
	res=num1-num2;
	printf("The subtraction of two number is=%d",res);
getch();//for hold output
}
