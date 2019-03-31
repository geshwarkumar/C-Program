/*Program to print series-Geshwar Kumar-02/09/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		int i,j,num,sum=0,count=0;
		clrscr();
		printf("How many terms: ");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
		{
			printf("%d",i);
			sum=sum+i;
			count++;
			if(count==3)
			{
				printf(" %d ",sum);
				sum=0;
				count=0;
			}
		}

getch();
}


