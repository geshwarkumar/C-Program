/*A program to print number up to hundrade
which are not multiple of 3 & 5-Geshwar Kumar-26/08/2015*/
#include<stdio.h>
#include<conio.h>

void main()
{
		int iter=1;
		clrscr();

		while(iter<=100)
		{
			if(iter%3==0 || iter%5==0)
			{}
			/*else if(iter%5==0)
			{
			} */
			else
			{
				printf("%d \t",iter);
			}
			iter=iter+1;
		}
getch();
}
