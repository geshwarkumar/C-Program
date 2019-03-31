/*A program to check entered number is even or odd-Geshwar Kumar-12/08/2015*/
#include<stdio.h>
#include<conio.h>
int main()
{
		int num;
		//clrscr();
		printf("\n Enter the number:");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("Entered number is even number:%d",num);
		}
		else
		{
			printf("Entered number is odd number:%d",num);
		}
//getch();
return 0;
}
