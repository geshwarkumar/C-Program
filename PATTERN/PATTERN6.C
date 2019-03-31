/*Program to print pattern
12345
1234
123
12
1
-Geshwar Kumar-02/09/2015*/
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
			for(j=num;j>i;j--)    //for(j=1;j<=num-i;j++)
			{
				printf("%d",temp); //printf("%3d",j);
				temp=temp+1;
			}
			printf("\n");
			temp=1;
		}
getch();
}


