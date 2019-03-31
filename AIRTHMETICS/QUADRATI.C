/*Program to compute quadratick equation-Geshwar Kumar-14/08/2015*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
		float a,b,c,D;
		float res1,res2;
		clrscr();
		printf("Enter three number:");
		scanf("%f%f%f",&a,&b,&c);
		D=(b*b)-(4*a*c);
		if(D<0)
		{
			printf("\nRoots are imaginary for D=%.2f and can not be found",D);
		}
		else if(D>0)
		{
			printf("\nThe root are real and different for D=%.2f",D);
			res1=((-b)+sqrt(D))/2*a;
			res2=((-b)-sqrt(D))/2*a;
			printf("\nResults are:\nres1=%.2f\nres2=%.2f",res1,res2);
		}
		else
		{
			printf("The roots equals",D);
			res1=(-b)/2*a;
			printf("\nResults are:\nres1=%.2f",res1);
		}
getch();
}


