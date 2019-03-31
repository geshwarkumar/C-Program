/*A program to calculate sum of digit using function-Geshwar Kumar-11/09/2015*/
#include<stdio.h>
#include<conio.h>
void sum(int);
//void rev(int);

void main()
{
		int num;
		clrscr();
		printf("Enter the more than three numbers:");
		scanf("%d",&num);
		printf("\nSum of digit of %d ",num);
		sum(num);
		//rev(num);
getch();
}
void sum(int x)    //called function
{
		int temp=0,iter=0,sum=0;
		while(iter<=x)
		{
			temp=x%10;
			sum=sum+temp;
			x=x/10;
			//x=x/10;
			iter++;
		}
		printf("is %d.",sum);
}


