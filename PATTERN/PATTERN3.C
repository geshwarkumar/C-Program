/*Program to print pattern
*****
 ****
  ***
   **
    *
-Geshwar Kumar-02/09/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		int i,j,k,num;
		clrscr();
		printf("How many terms:");
		scanf("%d",&num);
		for(i=0;i<=num;i++)
		{
			for(j=0;j<i;j++)
			{
				printf(" ");
			}
			for(k=num;k>i;k--)
			{
				 printf("*");
			}
			printf("\n");
		}
getch();
}


