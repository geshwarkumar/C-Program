/*Program to division of two number*/

#include<stdio.h>
#include<conio.h>
void main()
{
	float num1,num2,res;
	clrscr();//for clear screen
	printf("Enter two number:\n");
	scanf("%f%f",&num1,&num2);
	res=num1/num2;
	printf("The division of two number is=%f",res);
getch();//for hold output
}
