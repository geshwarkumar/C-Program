/*Program to find greatest and lowest element in 2`D array-Geshwar Kumar-05/10/2015*/
#include<stdio.h>
#include<conio.h>
#define row 10
#define col 10

void main()
{
	int R,C,arr[row][col],large,small;//R=row,C=column
	clrscr();
	printf("\n Enter values for 2`D array in 3x3 form:\n");
	printf("\n Enter the values::\n");
	for(R=0;R<3;R++)
	{
		for(C=0;C<3;C++)
		{
			scanf("%d",&arr[R][C]);
		}
	}
	/**********check**************/
	large=arr[0][0];
	small=arr[0][0];
	for(R=0;R<3;R++)
	{
		for(C=0;C<3;C++)
		{
			if(large<arr[R][C])
			{
				large=arr[R][C];
			}
			else if(small>arr[R][C])
			{
				small=arr[R][C];
			}
		}
	}
	printf("\n********Result*********");
	printf("\n%d is Gretaest element.\n%d is samllest element.",large,small);

getch();
}
