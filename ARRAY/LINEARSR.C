/*Program to perform linear search-Geshwar Kumar-04/10/2015*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5]={2,6,4,8,1},iter,item,loc=0;
	clrscr();
	printf("\n Given element are:\n");
	for(iter=0;iter<5;iter++)
	{
		printf("%5d",arr[iter]);
	}
	printf("\n Enter the element which you want to search: ");
	scanf("%d",&item);
	for(iter=0;iter<5;iter++)
	{
		if(item==arr[iter])
		{
			//printf("\n%d element is in %d position.",item,iter);
			loc=1;
			break;
		}
		else
		{
			loc=0;
		}
	}
	printf("\n *********Search Result*********\n");
	if(loc==1)
	{
		printf("\n %d element is in %d position.",item,iter);
	}
	else
	{
		printf("\n %d element not found.",item);
	}
getch();
}