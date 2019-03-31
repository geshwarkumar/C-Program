/*Program to print pyramid
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
-Geshwar Kumar-02/09/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
	int limit,line,gape,iter,temp;
	clrscr();
	printf("How many terms:");
	scanf("%d",&limit);
	for(line=1;line<=limit;line++)
	{
		for(gape=1;gape<=limit-line;gape++)
		{
			printf(" ");
		}
		for(iter=1;iter<=line;iter++)
		{
			printf(" %d",line);
		}
		printf("\n");
	}
getch();
}


