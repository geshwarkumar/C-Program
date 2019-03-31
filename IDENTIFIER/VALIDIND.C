/*Program to illustrate identifier-Geshwar Kumar-07/10/2015*/
#include<stdio.h>
#include<conio.h>

int num,num1;	//num,num1 is identifier with variable
int arr[3];     //arr is identifier with array


void get_data();  	//get_data is identifier with function
void _display();	//_display is identifier

void main()
{

	clrscr();
	get_data();
	_display();

getch();
}
void get_data()
{
	arr[0]=1;arr[1]=2;arr[2]=3;
	num=10;
	num1=20;
}
void _display()
{
	int i;	//i is identifier
	printf(" Number_first : %d\n Number_second : %d\n",num,num1);
	printf(" Array elements are:");
	for(i=0;i<3;i++)
	{
		printf("%5d",arr[i]);
	}
}
