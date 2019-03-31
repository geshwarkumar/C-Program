/*Program to product of two matrix-Geshwar Kumar-04/10/2015*/
#include<stdio.h>
#include<conio.h>
#define row 10
#define col 10

void main()
{
	int R,C,temp,size,mat1[row][col],mat2[row][col],res[row][col];//R=row,C=column,T=temp
	clrscr();
	printf("\n Enter the size of matrix(2-10): ");
	scanf("%d",&size);
	printf("\n Enter values for %d x %d matrix:\n",size,size);
	printf("\n Enter the value for first matrix:\n");
	for(R=0;R<size;R++)
	{
		for(C=0;C<size;C++)
		{
			scanf("%d",&mat1[R][C]);
		}
	}
	printf("\n Enter the value for second matrix:\n");
	for(R=0;R<size;R++)
	{
		for(C=0;C<size;C++)
		{
			scanf("%d",&mat2[R][C]);
		}
	}
	printf("\n *********Result*********");
	printf("\n Product/Multiplication of two matrix is:\n");
	for(R=0;R<size;R++)
	{
		for(C=0;C<size;C++)
		{
		res[R][C]=0;
			for(temp=0;temp<size;temp++)
			{
			res[R][C]=res[R][C]+mat1[R][temp]*mat2[temp][C];
			//printf("%d\t",res[R][C]);
			}
			printf("%d\t",res[R][C]);
		}
		printf("\n");
	}

getch();
}
