/*Program to implement strcpy()-02/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{

	int iter=0;
	char str1[10],str2[10];
	clrscr();

	printf("\n Enter any string:");
	scanf("%[^\n]s",str1);

	printf("\n ~~~~~~~~Result~~~~~~~~\n");
	printf("\n Before copy, string is:%s",str1);
	printf("\n After copy, string is:");

	while(str1[iter]!='\0')
	{
		str2[iter]=str1[iter];
		printf("%c",str2[iter]);
		iter++;
	}

getch();
}