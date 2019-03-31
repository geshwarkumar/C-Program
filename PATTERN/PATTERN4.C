/*Program to print pattern-Geshwar Kumar-02/09/2015*/
/*1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15*/
#include<conio.h>
#include<stdio.h>

void main()
{
		int i,j,num,temp=1;
		clrscr();
		printf("How many terms:");
		scanf("%d",&num);
		for(i=0;i<=num;i++)
		{
			for(j=0;j<i;j++)
			{
				printf("%d ",temp);
				temp=temp+1;
			}
			printf("\n\n");
		}
getch();
}


