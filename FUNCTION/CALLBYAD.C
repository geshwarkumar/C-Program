/*A program to demonstrate call by address function-Geshwar Kumar-11/09/2015*/
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);	//with return type & parameter   */

void main()
{
		int num1,num2;
		clrscr();
		printf("Enter two number:");
		scanf("%d%d",&num1,&num2);
		printf("\nBefore swapping:\nFirst number=%d\nSecond number=%d",num1,num2);
		swap(&num1,&num2);

getch();
}
void swap(int *x,int *y)    //called function for with rt & p
{
	int	*temp;
	*temp=*x;
	*x=*y;
	*y=*temp;
	printf("\n\nAfter swapping:\nFirst number=%d\nSecond number=%d",*x,*y);
}


