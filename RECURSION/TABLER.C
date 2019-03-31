/*Program to print table of given number using recursion-06/09/2015*/
#include<conio.h>
#include<stdio.h>
int table(int,int);

void main()
{
	int num,j;
	clrscr();
	printf("Enter the number(2 to 32648):");
	scanf("%d",&num);
	printf("\nTable of %d are:",num);
	table(1,num);
getch();
}
int table(int i,int n)
{
	int r;
	if(i==13)
	{
		return 0;
	}
	else
	{
	       r=n*i;
	       printf("\n%d * %d = %d",n,i,r);
	       return table(++i,n);
	}
}
