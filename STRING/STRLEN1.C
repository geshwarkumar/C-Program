/*Program to implement strlen()-07/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

	int iter=0,len=0;
	char str[10];
	clrscr();
	printf("\n Enter any string:");
	scanf("%s",&str);
	while(str[iter]!='\0')
	{
		len++;
		iter++;
	}
	printf("\n ********Result*********\n");
	printf("\n Length of \"%s\" is \"%d\".",str,len);

getch();
}