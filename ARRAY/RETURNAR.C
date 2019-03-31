/*Program to demonstrate return an array through function-Geshwar Kumar-18/09/2015*/
#include<stdio.h>
#include<conio.h>
int input(int [],int) ;
int output(int [],int) ;
int result(int [],int) ;
int iter=0;

void main()
{
	int arr[5];//,res[5];
	clrscr();
	iter=0;
	arr[5]=input(arr,5);
//	arr[5]=output(arr,5);
	while(iter<5)
	{
		 printf("\nEnter input[%d] element::%d",iter,arr[iter]);
		 printf("\narr[%d] = %d",iter,arr[iter]);
		iter++;
	}
	printf("\nThe sum of elements are:%d",result(arr,5));
getche();
}
int input(int s[],int n)
{  iter=0;
	while(iter<n)
	{
		/*printf("\nEnter in[%d] element::",iter);
		*/scanf("%d",s+iter);//&s[iter]
		iter++;
		//return s[iter];

	}
	return s[iter];
}
int output(int s[],int n)
{ iter=0;
	while(iter<n)
	{
		//return output;
		//printf("\narr[%d] = ",iter);
		iter++;
	}
	return s[iter];
}
int result(int s[],int n)
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

