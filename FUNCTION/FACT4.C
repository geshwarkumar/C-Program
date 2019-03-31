/*Program to calculate factorial using function-09/09/2015*/
/*With return type and parameter*/
#include<stdio.h>
#include<conio.h>
int fact(int);	//calling function

void main()
{
	int num,res;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&num);
	res=fact(num);	//function call
	printf("\nFactorial of %d is %d.",num,res);
getch();
}
int fact(int temp)	//called function
{
	int iter,fact=1;
	for(iter=1;iter<=temp;iter++)
	{
		fact=fact*iter;
	}
	return (fact);
}


