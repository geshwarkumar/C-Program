/*Program to print prime series up to n terms-Geshwar Kumar-02/09/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		int i,j,num,count=0;
		clrscr();
		printf("How many terms:");
		scanf("%d",&num);
		printf("Prime series are:\n");
		for(i=1;i<=num;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)

					count=count+1;

			}
			 if(count==2)

				printf("%d\n",i);
				count=0;

		}
getch();
}


