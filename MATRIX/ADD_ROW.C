/*C PROGRAM TO TAKE 3x4 MATRIX AND PRINT THE SUM OF ALL ELEMENTS OF EACH ROW
-GESHWAR KUMAR
-18/07/2016*/

#include<stdio.h>

int main()
{
	/*DECLARATION*/
	int mat[3][4],row,col,res[4] ;		//2D ARRAY

	/*INPUT*/
	printf("\n  /*C PROGRAM TO SUM OF ALL ELEMENTS OF EACH ROW OF GIVEN 3X4 MATRIX-GESHWAR KUMAR-18/07/2016*/\n");
	printf("\n Enter the elements for 3X4 matrix:\n");

	for(row=0;row<3;row++)
	{
		for(col=0;col<4;col++)
		{
			scanf("%d",&mat[row][col]);
		}
	}

	/*PROCESSING*/
	/*OUTPUT*/
	printf("\n Result is:\n");

	for(row=0;row<3;row++)
	{	//res = 0 ;
		res[row] = 0 ;
		for(col=0;col<4;col++)
		{
			res[row] = res[row] + mat[row][col];
			//res = res + mat[row][col] ;
		}//printf("%d\n",res);
		printf("%d\n",res[row]);
	}

return 0;
}	//END MAIN
