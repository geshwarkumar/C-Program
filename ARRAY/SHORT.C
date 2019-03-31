/*Program to short element of an array-Geshwar Kumar-06/10/2015*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],iter,temp,j;
	clrscr();

	printf("\n Enter five element an an array:\n");
	for(iter=0;iter<5;iter++)
	{
		scanf("%d",&arr[iter]);
	}
	printf("\n********Result*********");
	printf("\n 5 elements after shorting in descending order:\n");

	/**********check**************/
	for(iter=0;iter<5;iter++)
	{
		for(j=0;j<5-iter;j++)
		{
		if(arr[j]<arr[j+1])
		{
			temp=arr[j+1];
			arr[j+1]=arr[j];
			arr[j]=temp;
			//printf("%5d",arr[iter]);
		}  }
	}
	for(iter=0;iter<5;iter++)
	{
		printf("%5d",arr[iter]);
	}

getch();
}
