/*Program to transpose of 2`D square matrix-Geshwar Kumar-06/10/2015*/
#include<stdio.h>
#include<conio.h>
#define row 10
#define col 10

void main()
{
	int R,C,temp,mat[row][col],size;//R=row,C=column,T=temp
	clrscr();
	printf("\n Enter the size of matrix(2-10): ");
	scanf("%d",&size);
	printf("\n Input the values for %d x %d matrix:\n",size,size);
	printf("\n Enter:\n");
	for(R=0;R<size;R++)
	{
		for(C=0;C<size;C++)
		{
			scanf("%d",&mat[R][C]);
		}
	}
	printf("\n3x3 matrix Before transpose:\n");
	for(R=0;R<size;R++)
	{
		for(C=0;C<size;C++)
		{
			printf("%d\t",mat[R][C]);
		}
		printf("\n");
	}
	/*for(R=0;R<size;R++)
	{
		for(C=0;C<size;C++)
		{
			for(temp=0;temp<C;temp++)
			{
				mat[temp][C]=mat[R][C];
				mat[R][temp]=mat[temp][C];
				mat[R][C]=mat[R][temp];
			}
			//printf("%d\t",mat[R][C]);
		}
		//printf("\n");
	}   */
	/*++++++++++++++Transpose+++++++++++++*/
	for(R=0;R<size;R++)
	{
		for(C=0;C<R;C++)
		{
			temp=mat[R][C];
			mat[R][C]=mat[C][R];
			mat[C][R]=temp;
			//printf("%d\t",mat[R][C]);
		}
		//printf("\n");
	}
	printf("\n *********Result*********");
	printf("\n After Transpose of %d x %d matrix is:\n",size,size);

	for(R=0;R<size;R++)
	{
		for(C=0;C<size;C++)
		{

			printf("%d\t",mat[R][C]);
		}
		printf("\n");
	}

getch();
}
