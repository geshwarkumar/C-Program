/*Program to read complex no. & perform arithmetic operation
-Geshwar Kumar
-15/11/2015*/
#include<conio.h>
#include<stdio.h>
#include<math.h>
//#define i sqrt(-1)
struct com_no
{
	double real1,real2,img1,img2;
}cn;
void com_IO(struct com_no cn);
void main()
{
	clrscr();
	com_IO(cn);
getch();
}
void com_IO(struct com_no cn)
{       double i;
	i=pow(-1,1/2);
	printf("\nEnter first complex no. : ");
	printf("\n value for real part : ");scanf("%lf",&cn.real1);
	printf("\n value for imaginary part : ");scanf("%lf",&cn.img1);
	printf("\nEnter second complex no. : ");
	printf("\n value for real part : ");scanf("%lf",&cn.real2);
	printf("\n value for imaginary part : ");scanf("%lf",&cn.img2);
	printf("\nEntered complex no. are : ");
	printf("\n 1. %.2lf+i%.2lf\n2. %.2lf+i%.2lf ",cn.real1,cn.img1,cn.real2,cn.img2);
	/*Arithmetic operations*/
	printf("\nResults are:");
	printf("\n Addition : %.2lf,%.2lf",cn.real1+cn.real2+i*cn.img1+i*cn.img2,i);

}