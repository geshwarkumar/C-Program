/*Program for print two matrix
-Geshwar Kumar
-14/02/2016*/

#include<stdio.h>
#include<conio.h>
 /*MAIN FUNCTION*/
 int main()
 {
           int mat1[2][2],mat2[2][2],R,C;
           printf("\n Enter the element for first matrix :\n");
           for(R=0;R<2;R++)
           {
                           for(C=0;C<2;C++)
                           {
                                           scanf("%d",&mat1[R][C]);
                           }
           }
           printf("\n Enter the element for second matrix :\n");
           for(R=0;R<2;R++)
           {
                           for(C=0;C<2;C++)
                           {
                                           scanf("%d",&mat2[R][C]);
                           }
           }
           printf("\n Matrix are:\n First Matrix \t Second Matrix\n");
           for(R=0;R<2;R++)
           {
                           for(C=0;C<2;C++)
                           {
                                           printf("%2d",mat1[R][C]);
                           }
                           printf("\t\t\t");
                           for(C=0;C<2;C++)
                           {
                                           printf("%2d",mat2[R][C]);
                           }
                           printf("\n");
           }
 getch();
}
           
 
                            
