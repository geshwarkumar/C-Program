/*Program to implement strcat()-02/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int iter=0,k=0;
	char str1[10],str2[10];
	clrscr();

	printf("\n Enter first string:");
	scanf("%s",&str1);

	printf("\n Enter second string:");
	scanf("%s",&str2);

	while(str1[iter]!='\0')
	{
		iter++;
	}
	while(str2[k]!='\0')
	{
		str1[iter]=str2[k];
		iter++;
		k++;
	}
	str1[iter]=NULL;
	printf("\nConcatenet of given two string is:%s",str1);

getch();

}