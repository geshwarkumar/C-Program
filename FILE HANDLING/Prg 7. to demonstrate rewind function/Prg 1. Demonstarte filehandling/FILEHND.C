/*Program to demonstrate file handling function -Geshwar Kumar-31/10/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		FILE *fp;
		char ch;
		int noc=0,nol=0,nos=0,not=0;
		clrscr();
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
				if(ch==EOF)
					break;
				noc++;
				if(ch==' ')
					nos++;
				if(ch=='\n')
					nol++;
				if(ch=='\t')
					not++;
		}

		fclose(fp);
		printf("\n Number of Character is %d",noc);
		printf("\n Number of line is %d",nol);
		printf("\n Number of space is %d",nos);
		printf("\n Number of tab is %d",not); }
getch();
}