/*Program to check given string is palindrome or not without using string function-02/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int iter=0,len,j,count=0;
	char str[10];
	clrscr();
	printf("\n Enter any string:");
	while(1)
	{
		scanf("%c",&str[iter]);
		if(str[iter]=='\n')
		{
			break;
		}
		iter++;
	}
	str[iter]='\0';
	len=strlen(str);
	for(iter=0,j=len-1;iter<len;iter++,j--)
	{
		if(str[iter]!=str[j])
		{
			count=1;
			break;
		}
	}

	if(count==0)
	{
		printf("%s is palindrome.",str);
	}
	else
	{
		printf("%s is not a palindrome.",str);
	}

getch();
}