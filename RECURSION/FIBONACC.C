/*Program to print fibonassi series using recursion-09/09/2015*/
#include<conio.h>
#include<stdio.h>
int fibo(int);

void main()
{
	int num,iter;//,res;
	clrscr();
	printf("How many terms:");
	scanf("%d",&num);
	//fibo(num);
	printf("\nFibbonacci series are:\n");
	//fibo(num);
	for(iter=1;iter<num;iter++)
		printf("%3d",fibo(iter));
getch();
}
int fibo(int n)
{
	//int f,s1=-1,s2=1;
	if(n==0||n==1)
		return 0;
	else
	{
	     if(n==2)
		return 1;
	      else

		return (fibo(n-1)+fibo(n-2));
		//s1=s2;
		//s2=f;
		//n=n-1;
	}

	//printf("%d\n",f);
	//return fibo(f);

}