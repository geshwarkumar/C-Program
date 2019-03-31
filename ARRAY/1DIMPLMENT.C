/*Program to array IMPLEMENTATION 1D
-Geshwar Kumar
-18/06/2016*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[5],arr1[5]= {1,2,3,4,5},iter; 	//arr = ARRAY VARIABLE,5 = SIZE //DECLARATION
	
	//
	arr1[5] = {1,2,3,4,5};	//INITIALIZATION
	printf("\n Enter five element an an array:\n");//RUN TIME INITIALIZATION
	for(iter=0;iter<5;iter++)
	{
		scanf("%d",&arr[iter]);
	}
	printf("\n Array Elements are :\n");
	printf("First array :\n");
	for(iter=0;iter<5;iter++)
	{
		printf("%5d",arr[iter]);
	}
	printf("\nSecond array :\n");
	for(iter=0;iter<5;iter++)
	{
		printf("%5d",arr1[iter]);
	}
return 0;
}
