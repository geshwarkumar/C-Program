/*Program to demonstrate FLOAT DATA TYPE-Geshwar Kumar-05/11/2015*/
#include<stdio.h>
#include<conio.h>

#include<values.h> /*FLOAT SPECIFICATION*/

void main()	//Main function
{

	clrscr();

	printf("\n Types of FLOAT TYPE with details:\n");
	printf("\n 1.Float Type:(float)");
		printf("\n Size(in byte) = %d bits=%d\tRange = %e to %e",sizeof(float),_FEXPLEN,MINFLOAT,MAXFLOAT);
		printf("\n Size(in byte) = %d \tRange = %e to %e",sizeof(float),FMINEXP,FMAXEXP);
		printf("\n Size(in byte) = %d bits=%d\tRange = %e to %e",sizeof(float),_FEXPLEN,FSIGNIF,FMAXPOWTWO);


getch();
}
