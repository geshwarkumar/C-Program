/*A program to calculate vowel,consonant & lenght of a string-Geshwar Kumar-15/09/2015*/
#include<stdio.h>
#include<conio.h>

void main()
{
		char str[50];
		int iter,v=0,c=0,l=0;
		clrscr();
		printf("Enter any string:");
		scanf("%[^\n]s",str);
		printf("\nEntered string is:");
		for(iter=0;str[iter]!='\0';iter++)
		{
				if(str[iter]=='a'||str[iter]=='e'||str[iter]=='i'||str[iter]=='o'||str[iter]=='u'||str[iter]=='A'||str[iter]=='E'||str[iter]=='I'||str[iter]=='O'||str[iter]=='U')
					v++;
				else
					c++;
				l++;
				printf("%c",str[iter]);
		}

		printf("\nVowel is:%d\nConsonant is:%d\nLength is:%d",v,c,l);
getch();
}

