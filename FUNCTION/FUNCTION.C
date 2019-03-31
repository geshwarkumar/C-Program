/*A program to demonstrate types of function-Geshwar Kumar-09/09/2015*/
#include<stdio.h>
#include<conio.h>
//void fact();	//without return type & parameter
//int fact1();	//with return type & no parameter
//void fact2(int);	//no return type & with parameter
int fact3(int);	//with return type & parameter   */

void main()
{
		int num,num1,fres,res1;
		clrscr();
		/*function call for without rt & p*/
		//fact();
		/*function call for with rt & no p*/
		//res=fact1();
	 /*	fres=fact1();
		printf("\nFactorial of 5 is %d",fres);
		/*no return type & with parametre  */
		/*printf("Enter the number:");
		scanf("%d",&num);
		fact2(num);
		/*with return type & parametre  */
		printf("Enter the number:");
		scanf("%d",&num1);
		res1=fact3(num1);
		printf("Factorial of %d is %d",num1,res1);

getch();
}
/*void fact()    //called function for without rt & p
{
	int	iter=1,f=1;
	while(iter<=5)
	{
		f = f*iter;
		iter=iter+1;
	}
	printf("\nFactorial of 5 is %d",f);
}
int fact1()    //called function for with rt & no p
{
	int	iter,f=1;
	for(iter=1;iter<=5;iter++)
	{
		f= f*iter;
	}
	return f;
}  */
/*void fact2(int res)    //called function for without rt & p
{
	int	i=1,f=1;
	while(i<=res)
	{
		f = f*i;
		i++;
	}
	printf("Factorial of %d is %d",res,f);
}   */
int facr3(int res1)    //called function for with rt & p
{
	int	iter,f=1;
	for(iter=1;iter<=res1;iter++)
	{
		f= f*iter;
	}
	return f;
}


