/*C PROGRAM TO TAKE 5 NAME AS INPUT AND SORT THE NAME AND PRINT IT
-GESHWAR KUMAR
-15/07/2016*/

#include<stdio.h>
#include<string.h>

int main()	//MAIN FUNCTION
{
	char name[5][10],temp[5];	//5 FOR RANGE AND 10 FOR LENGTH OF NAME
	int iter1,iter2,iter3 ;
	/*TITLE*/
	printf("C PROGRAM TO INPUT 5 NAME AND SORTING NAME VISE\n");

	/*INPUT 5 NAME*/
	printf("\n Enter the 5 name :\n");
	for(iter1=0;iter1<5;iter1++)
	{
		scanf("%s",name[iter1]);
	}

	/*PROCESSING*/
	for(iter1=0;iter1<5;iter1++)
	{
		for(iter2=iter1+1;iter2<5;iter2++)
		{
			if(strcmp(name[iter1],name[iter2]) > 0)
			{
				strcpy(temp,name[iter1]);
				strcpy(name[iter1],name[iter2]);
				strcpy(name[iter2],temp);
			}
		}
	}

	/*OUTPUT*/
	printf("\n Sorted name are:\n");
	for(iter1=0;iter1<5;iter1++)
	{
		printf("%s\n",name[iter1]);
	}
return 0;
}
