/*Program to calculate factorial using function-09/09/2015*/
/*With return type and no parameter*/
#include<stdio.h>
#include<conio.h>
int fact();	//calling function

void main()
{
	int res;
	clrscr();
	res=fact();	//function call
	printf("is %d.",res);
getch();
}
int fact()	//called function
{
	int num,iter=1,fact=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(iter=1;iter<=num;iter++)
	{
		fact=fact*iter;
	}
	printf("\nFactorial of %d ",num);
	return (fact);
}


