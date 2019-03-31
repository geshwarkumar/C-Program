/*Program to demonstrate switch case
-Geshwar Kumar
-11/08/2015*/
#include<conio.h>
#include<stdio.h>
void main()
{
		int a,b,res;
		char op;
		clrscr();
		printf("Enter two number:");
		scanf("%d%d",&a,&b);
		printf("Enter operator(+/-/*//):");
		fflush(stdin);
		scanf("%c",&op);
		switch(op)
		{
			case '+':
							res=a+b;
							break;
			case '-':
							res=a-b;
							break;
			case '*':
							res=a*b;
							break;
			case '/':
							res=a/b;
							break;
			default:
							printf("%c is wrong selection",op);
		}
		printf("\nResult computed is:%d",res);
getch();
}


