
/*Program to print pattern-Geshwar Kumar-02/09/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		int i,j,num,temp;
		clrscr();
		printf("How many terms:");
		scanf("%d",&num);
		temp=num;
		for(i=0;i<=num;i++)
		{
			for(j=num;j>i;j--)
			{
				printf("%d",temp);
				temp=temp-1;
			}
			printf("\n");
			temp=num-1;
		}
getch();
}


