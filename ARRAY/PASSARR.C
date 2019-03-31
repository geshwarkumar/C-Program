/*Program to demonstrate passing an array through function-Geshwar Kumar-18/09/2015*/
#include<stdio.h>
#include<conio.h>
void input(int [],int) ;
void output(int [],int) ;
int sum(int [],int) ;
int iter=0;

void main()
{
	int arr[5];
	clrscr();
	input(arr,5);
	output(arr,5);
	printf("\nThe sum of elements are:%d",sum(arr,5));
getche();
}
void input(int s[],int n)
{
	while(iter<n)
	{
		printf("\nEnter in[%d] element::",iter);
		scanf("%d",s+iter);//&in[iter]
	iter++;
	}
}
void output(int s[],int n)
{ iter=0;
	while(iter<n)
	{
		printf("\narr[%d] = %d",iter,*(s+iter));//out[iter]
		iter++;
	}
}
int sum(int s[],int n)
{
	int sum=0;
	iter=0;
	while(iter<n)
	{
		sum=sum + *(s+iter);//sum += *(s+iter);//sum=sum+s[iter];
		iter++;
	}
return sum;
}

