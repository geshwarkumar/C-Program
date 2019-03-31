#include<stdio.h>
#include<conio.h>

int main()
{
    		int i,j,x,row;
    		printf("Enter the row:");
    		scanf("%d",&row);
    		for(i=0;i<row;i++)
    		{
		 			   //x=1;
		 			   for(j=1;j<=row-i;j++)
		 			   {
					    				  printf("%3d",j);
					    				  //x++;
				        }
				        printf("\n");
        }
      getch();
}
									  
