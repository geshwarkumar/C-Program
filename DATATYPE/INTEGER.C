/*Program to demonstrate INTEGER DATA TYPE-Geshwar Kumar-15/10/2015*/
#include<stdio.h>
#include<conio.h>

#include<limits.h>/*INTEGER SPECIFICATION*/
void main()	//Main function
{
	short int s;	//INTEGER type declaration
	clrscr();
	/*Signed interger type*/
	printf("\n Types of INTEGER TYPE with details:\n");
	printf("\n 1.Signed Integer Type:(int/signed int)");
		printf("\n Size(in byte) = %d\tRange = %d to %d",sizeof(signed int),INT_MIN,INT_MAX);
	printf("\n\n 2.Uigned Integer Type:(unsigned int)");
		printf("\n Size(in byte) = %u\tRange = 0 to %u",sizeof(unsigned int),UINT_MAX);
	printf("\n\n 3.Short signed Integer Type:(short int)");
		printf("\n Size(in byte) = %i\tRange = %i to %i",sizeof(short int),SHRT_MIN,SHRT_MAX);

	printf("\n\n 4.Unsigned short Integer Type:(unsigned short int)");
		printf("\n Size(in byte) = %d\tRange = 0 to %d",sizeof(unsigned short int),USHRT_MAX);
	printf("\n\n 5.Signed Long Integer Type:(long int/signed long int)");
		printf("\n Size(in byte) = %li\tRange = %li to %li",sizeof(signed long int),LONG_MIN,LONG_MAX);
	printf("\n\n 6.Unsigned Long Integer Type:(unsifned long int)");
		printf("\n Size(in byte) = %du\tRange = 0 to %lu",sizeof(unsigned long int),ULONG_MAX);



getch();
}
