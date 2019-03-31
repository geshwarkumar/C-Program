/*Program to calculate of quotiont and remainder of two number*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,rem,quo;
	clrscr();//for clear screen
	printf("Enter two number:\n");
	scanf("%d%d",&num1,&num2);
	quo=num1/num2;
	rem=num1%num2;
	printf("The Results are\nQuotiont=%d\nRemainder=%d",quo,rem);
getch();//for hold output
}
