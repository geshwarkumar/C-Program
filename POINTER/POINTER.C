/*Program to demonstrate pointer-Geshwar Kumar-14/10/2015*/
#include<stdio.h>
//#include<conio.h>

int main()
{
		int iter=10;
		int *ptr;
		//clrscr();
		ptr=&iter;
		printf("\n OUTPUT \n for iter \n");
		printf("\n Value=%d\tAddress=%x\n",iter,&iter);
		printf("\n for pointer variable \n");
		printf("\n Value=%d\tAddress=%x",*ptr,&ptr);
		printf("\n Comparision:\n");
		printf("\n Address of iter=%x & pointer var.=%x",ptr,&iter);
return 0;
}
