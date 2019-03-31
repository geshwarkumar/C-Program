/*C PROGRAM TO FIND WHETHER NUMBER IS A PRIME OR NOT USING BREAK
-GESHWAR KUMAR
-05/07/2016*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
	/*VARIABLE DECLARATION*/
	int num,iter;
	
	/*INPUT*/
	printf(" Enter the number: ");
	scanf("%d",&num);
	
	/*PROCESSING*/
	for(iter=1;iter<num;iter++)
	{
		if(num % 2 == 0)
		{
			printf("\n %d is not a prime number.",num);
			break ;
		}
	}
	if(num == iter)
	{
		printf("\n %d is prime number.",num);
	}
}
