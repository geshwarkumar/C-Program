/*Program to print pyramid-Geshwar Kumar-02/09/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		int limit,line,gape,iter,temp;
		clrscr();
		printf("How many terms:");
		scanf("%d",&limit);
		temp=1;
		for(line=1;line<=limit;line++)
		{
			for(gape=1;gape<=limit-line;gape++)
			{
				printf(" ");
			}
			for(iter=1;iter<=line;iter++)
			{
				printf("%d",iter);
			}
			for(iter=1;iter<=(2*line-1);iter++)
			{
				 printf("%d",temp);
			}
			printf("\n");
			temp=temp+1;
		}
getch();
}


