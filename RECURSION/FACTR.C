/*Program to calculate factorail using recursion-06/09/2015*/
#include<conio.h>
#include<stdio.h>
int fact(int);

void main()
{
	int f;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&f);
	printf("\nThe factorial of %d is %d.",f,fact(f));
getch();
}
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return (n*fact(n-1));
}