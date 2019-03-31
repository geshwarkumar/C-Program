/*Program to print sum of digit using recursion-06/09/2015*/
#include<conio.h>
#include<stdio.h>
int sum(int);

void main()
{
	int num;
	clrscr();
	printf("Enter the number(2 to 32648):");
	scanf("%d",&num);
	printf("\nSum of %d is:%d",num,sum(num));
getch();
}
int sum(int n)
{

	if(n==0)
		return 0;
	else
		return (n%10+sum(n/10));

}