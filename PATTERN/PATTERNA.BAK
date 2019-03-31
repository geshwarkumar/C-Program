/*Program to print pyramid
    A
   ABA
  ABCBA
 ABCDCBA
-Geshwar Kumar-02/09/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		int limit,line,space,iter,x=65;
		clrscr();
		printf("How many terms:");
		scanf("%d",&limit);
		for(line=0;line<limit;line++)
		{
			x=65;
			for(space=0;space<=limit-line;space++)
			{
				printf(" ");
			}
			for(iter=1;iter<=line;iter++)
			{
				printf("%c",x);x++;
			}
			for(iter=line;iter>=0;iter--)
			{
				 printf("%c",x);x--;
			}
			printf("\n");
		}
getch();
}


