/*PROGRAM TO TAKE AN INTEGER ARRAY OF 10 ELEMENTS AS INPUT AND PRINT THE LARGEST,SMALLEST,SUM OF ALL THE ELEMENTS.(USING FOR LOOP)
-GESHWAR KUMAR
-05/07/2016*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*DATA DECLARATION*/
	int arr[10],iter,j,sum=0,largest,smallest;
	
	system("cls");
	
	/*INPUT*/
	printf("Enter 10 elements :\n");
	for(iter=0;iter<10;iter++)
	{
		scanf("%d",&arr[iter]);
	}
	
	/*OPERATION*/
	largest = arr[0];
	smallest = arr[0];
	
	for(iter=0;iter<10;iter++)
	{
		/*FOR SUM OF ALL ELEMENTS*/
		sum = sum + arr[iter];
		
		/*FOR CHECK SMALLEST AND LARGEST*/
		if(smallest > arr[iter])
		{
			smallest = arr[iter];
		}
		else if(largest < arr[iter])
		{
			largest = arr[iter];
		}
	}
	/*OUTPUT*/
	printf("\n Smallest number is: %d.",smallest);
	printf("\n Largest number is: %d.",largest);
	printf("\n Sum of all the elements is: %d.\n",sum);
system("pause");
}
