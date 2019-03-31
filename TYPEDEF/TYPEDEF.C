/*Program to demonstrate structure passing pointer variable-Geshwar Kumar-29/10/2015*/
#include<conio.h>
#include<stdio.h>
typedef int num;
typedef struct number
{
		//num i;//also used
		int i;
}Integer;

void getdata(Integer*);
void display(Integer*);

void main()
{
		Integer n1,n2,n3;
		//struct number n1,n2,n3;
		clrscr();
		getdata(&n1);
		getdata(&n2);
		display(&n1);
		display(&n2);
		n3.i = n2.i + n1.i;
		display(&n3);
getch();
}
void getdata(Integer *n)
{
		printf("\n Enter a value:");
		scanf("%d",&n->i);
}
void display(Integer *n)
{
		printf("\n The value stored is %d",n->i);
}

