/*Program to read complex no. & perform arithmetic operation
-Geshwar Kumar
-15/11/2015*/
#include<conio.h>
#include<stdio.h>

struct com_no
{
	double real,imag;
}cn1,cn2,cn3;
void com_IO(struct com_no cn1,struct com_no cn2);
void main()
{

	clrscr();

	printf("\nEnter first complex no. (a+ib) : ");
	printf("\n value for a : ");scanf("%lf",&cn1.real);
	printf("\n value for b : ");scanf("%lf",&cn1.imag);
	printf("\nEnter second complex no. (c+id): ");
	printf("\n value for c : ");scanf("%lf",&cn2.real);
	printf("\n value for d : ");scanf("%lf",&cn2.imag);
	printf("\nEntered complex no. are : ");
	printf("\n 1. a+bi = %.2lf+%.2lfi\n 2. c+id = %.2lf+%.2lfi ",cn1.real,cn1.imag,cn2.real,cn2.imag);

	com_IO(cn1,cn2);

getch();
}
void com_IO(struct com_no cn1,struct com_no cn2)
{
		/*Arithmetic operations*/
	printf("\nResults are:");
	cn3.real=cn1.real+cn2.real;
	cn3.imag=cn1.imag+cn2.imag;
	if(cn3.imag>=0)
		printf("\n Addition : %.2lf + %.2lfi",cn3.real,cn3.imag);
	else
		printf("\n Addition : %.2lf %.2lfi",cn3.real,cn3.imag);
	cn3.real=cn1.real-cn2.real;
	cn3.imag=cn1.imag-cn2.imag;
	if(cn3.imag>=0)
		printf("\n Subtratction : %.2lf + %.2lfi",cn3.real,cn3.imag);
	else
		printf("\n Subtraction : %.2lf %.2lfi",cn3.real,cn3.imag);
	cn3.real=cn1.real*cn2.real-cn1.imag*cn2.imag;
	cn3.imag=cn1.imag*cn2.real-cn1.real*cn2.imag;
	if(cn3.imag>=0)
		printf("\n Multiplication : %.2lf + %.2lfi",cn3.real,cn3.imag);
	else
		printf("\n Multiplication : %.2lf %.2lfi",cn3.real,cn3.imag);


}