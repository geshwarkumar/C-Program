#include<conio.h>
#include<stdio.h>
void main(int argc,char *argv[])
{
		int i,per;
		clrscr();
		for(i=1;i<=argc;i++)
		{
			 *argv[i]=*argv[i] + *argv[i+1];
			 printf("\nPosition[%d]: %d",i,atoi(argv[i]));
		}
		per=*argv[i]/3;
		printf("Percent= %d",per);
	getch();
}