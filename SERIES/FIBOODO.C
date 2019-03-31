/*A program to find fibbonacci series-Geshwar Kumar-26/08/2015*/
#include<stdio.h>
#include<conio.h>

void main()
{
		int num,iter=0,s1=-1,s2=1,temp=0;
		clrscr();
		printf("How many terms:");
		scanf("%d",&num);
		printf("%d terms fibbonacci series are:\n",num);
		do
		{
			temp=s1+s2;
			printf("%d\n",temp);
			s1=s2;
			s2=temp;
			iter=iter+1;
		} while(iter<num);
getch();
}
