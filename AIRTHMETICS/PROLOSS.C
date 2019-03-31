/*A program to check profit or loss-Geshwar Kumar-19/08/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int cp,sp,p,l,res;
		clrscr();
		printf("\n Enter cost prize of a item:");
		scanf("%d",&cp);
		printf("\n Enter selling prize of a item:");
		scanf("%d",&sp);
		if(cp<=sp)
		{
			if(cp<sp)
			{
				p=(sp-cp)*100/cp;
				printf(" Seller has made profit of %d%",p);
			}
			else
			{
				printf(" Seller has no profit or loss.");
			}
		}
		else
		{
			l=(cp-sp)*100/cp;
			printf(" Seller has incurred loss of %d%",l);
		}
getch();
}
