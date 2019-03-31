/*C PROGRAM TO PRINT SUM OF DIGITS AND REVRSE OF THE NUMBER USING A USER DEFINE FUNCTION AND WHILE LOOP
-GESHWAR KUMAR
-05/07/2016*/

#include<stdlib.h>
#include<stdio.h>

long SumDigit(long);	//FUNCTION DECLARATION FOR SUM OF DIGIT
long Reverse(long);		//FUNCTION DECLARATION FOR REVERSE DIGIT

int main()
{
	/*DECLARATION*/
	long num,sum,rev ;
	
	/*INPUT*/
	printf("\n Enter any numbers: ");
	scanf("%ld",&num);
	
	/*PROCESSING*/
	sum = SumDigit(num);
	rev = Reverse(num);
	
	/*OUTPUT*/
	printf("\n Sum of given digit is: %ld",sum);
	printf("\n Reverse digit is: %ld",rev);
}	//MAIN FUNCION CLOSED

/*FUNCTION DEFINITION*/
long SumDigit(long digit)
{
	long sum=0 ;
	short temp=0 ;
	while(digit != 0)
	{
		temp = digit % 10;
		sum = sum + temp ;
		digit = digit / 10 ;
	}
return sum ; 
}
long Reverse(long digit)
{
	long rev=0 ;
	short temp=0 ;
	while(digit != 0)
	{
		temp = digit % 10 ;
		rev = rev * 10 + temp ;
		digit = digit / 10 ;
	}
return rev ;
}
