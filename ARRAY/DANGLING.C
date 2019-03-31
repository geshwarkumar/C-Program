#include<stdio.h>
#include<conio.h>
int *call();
void main()
{
	int *ptr;
	ptr=call();
	printf("%d",*ptr);
getch();
}
int *call()
{
	int x=25;
	x++;
return &x;
}