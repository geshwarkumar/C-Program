/*Program to count vowel and consonent file handling function -Geshwar Kumar-31/10/2015*/
#include<conio.h>
#include<stdio.h>

int main()
{
		FILE *fp;
		char ch;
		int noc=0,nol=0,nos=0,not=0,v=0,c=0;
		//clrscr();
		fp=fopen("C:\\Turboc3\\MCA1\\SWAP.C","r");
		if(fp==NULL)
		{
			printf("\n Not find out....???");
		}
		else
		{
		while(1)
		{
				ch=fgetc(fp);
				noc++;
				if(ch==EOF)
				{
					break;
				}
				else if(ch==' ')
				{
					nos++;
				}
				else if(ch=='\n')
				{
					nol++;
				}
				else if(ch=='\t')
				{
					not++;
				}
				else if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'
				||ch=='o'||ch=='O'||ch=='u'||ch=='U')
				{
					v++;
				}
				else
				{
					c++;
				}
		}

		fclose(fp);
		printf("\n Number of Character is %d",noc);
		printf("\n Number of line is %d",nol);
		printf("\n Number of space is %d",nos);
		printf("\n Number of tab is %d",not);
		printf("\n Number of vowels is %d",v);
		printf("\n Number of consonent is %d",c);
		}
getch();
}
