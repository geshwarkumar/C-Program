/*A program to string function-Geshwar Kumar-21/08/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
		char ch[10],str[10];
		//int n;  //strlen
		clrscr();
		printf("\n Enter the first string:");
		gets(ch);  //strlen,strrev,strcmp
		//scanf("%[^\n]s",ch);
		printf("\n Enter the second string:");
		gets(str);
		//n=strlen(ch);
		//printf("\nThe length of string is:%d",strlen(ch));
		//printf("\nThe length of string is:%d",n);
		//printf("\nThe reverse of string is:%s",strrev(ch));
		//printf("\nThe copied string is:%s",strcpy(str,ch));
		if(strcmpi(ch,str)<0)
		{
				printf("\nThe str1: %s is smaller then str2:%s",ch,str);
		}
		else if(strcmpi(ch,str)>0)
		{
				printf("\nThe str1: %s is greater then str2:%s",ch,str);
		}
		else
		{
				printf("\nThe str1: %s and str2:%s are eual.",ch,str);
		}
getch();
}
