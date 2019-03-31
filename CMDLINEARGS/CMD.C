/*Progmram to demonstrate command line argument
-Geshwar Kumar
-28/10/2015*/
#include<stdio.h>
#include<conio.h>

//#include<string.h>

void main(int argc,char * argv[])
{
		int a,i,sum=0,per;
		clrscr();
		if(argc!=4)
		{
			printf("\n You had not suppied proper argu.");
			//exit(1);
		}
		for(i=0;i<argc;i++)
		{
			sum= sum + atoi(argv[i]);
		}
		per=sum/3;
		printf("\n The percent is:%d",per);
getch();
}
