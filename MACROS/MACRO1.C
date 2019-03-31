/*Program to implement macro-Geshwar Kumar-16/10/2015*/
#include<stdio.h>
#include<conio.h>
#define SUM(x,y) x+y
#define MACRO 100

void main()
{
	int num1,num2;
	clrscr();
	printf("Enter two number:");
	scanf("%d%d",&num1,&num2);
	num1=SUM(num1,num2);
	printf("Sum of two number is=%d\n",num1);
	printf("Types of macro\n");
	printf("\n 1.#ifdef...#endif\n");
		#ifdef MACRO
			printf("\nThis is #ifdef macro.");
		#endif
		printf("\n\n 2.#undef && #ifndef...#endif\n");
		#undef MACRO 100
		#ifndef MACRO
			printf("\nIn this not define macro.");
		#endif
		printf("\n\n 3.#define && #ifdef...#elif...#endif\n");
		#define MACRO 200
		#ifdef MACRO
			printf("\nThis is redefine macro.");
		#elif
			printf("\nHere not define any macro.");
		#endif

getch();
}