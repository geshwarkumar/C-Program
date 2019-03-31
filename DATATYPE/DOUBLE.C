/*Program to demonstrate DOUNBLE DATA TYPE-Geshwar Kumar-05/11/2015*/
#include<stdio.h>
#include<conio.h>

#include<values.h> /*DOUBLE SPECIFICATION*/

void main()	//Main function
{

	clrscr();

	printf("\n Types of DOUBLE TYPE with details:\n");
	printf("\n 1.Double Type:(double)");
		printf("\n Size(in byte) = %d bits=%d\tRange = %e to %e",sizeof(double),_DEXPLEN,MINDOUBLE,MAXDOUBLE);
		printf("\n Size(in byte) = %d        \tRange = %e to %e",sizeof(double),DMINEXP,DMAXEXP);
		printf("\n Size(in byte) = %d bits=%d\tRange = %e to %e",sizeof(float),_DEXPLEN,DSIGNIF,DMAXPOWTWO);


getch();
}
