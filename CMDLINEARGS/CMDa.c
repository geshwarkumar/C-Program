#include<conio.h>
#include<stdio.h>
void main(int argc,char *argv[])
{
		int i;
		clrscr();
		for(i=0;i<=argc;i++)
		{
			printf("\nPosition[%d]: %s",i,argv[i]);
		}
	getch();
}