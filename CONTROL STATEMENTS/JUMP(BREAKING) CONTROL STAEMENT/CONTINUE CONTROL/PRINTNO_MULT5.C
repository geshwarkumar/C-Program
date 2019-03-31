/*PROGRAM TO PRINT NUMBERS FROM 1 TO n EXCEPT THE MULTIPLES OF 5.(USING CONTINUE)
-GESHWAR KUMAR
-07/07/2016*/

#include<stdio.h>
#include<conio.h>

int main()
{
	/*VARIABLE DECLARATION*/
	int num,iter;

	/*INPUT*/
	printf("\n Enter number where you want to go: ");
	scanf("%d",&num);
	/*PROCESSING*/
	printf("\n Numbers from 1 to %d except multiples of 5 are :\n",num);
	for(iter=1;iter<=num;iter++)
	{
		if(iter % 5 == 0)
		{
			/*OUTPUT*/
			printf("%3d",iter);
			continue ;
		}
	}
return 0;
}
