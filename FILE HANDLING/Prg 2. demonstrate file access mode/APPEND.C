/*Program to demonstrate file access mode
-Geshwar Kumar
-04/11/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		char file1[30],file2[30],file3[60];
		FILE *fin,*fout,*fapp;
		char ch;
		clrscr();
		printf("\n <<< Program to copy a file into a new file >>>\n");

		printf("\n Enter the path for file1: ");
		scanf("%s",file1);
		printf("\n Enter the path for file2: ");
		scanf("%s",file2);
		printf("\n Enter the destination path: ");
		scanf("%s",file3);

		fin=fopen(file1,"r");
		fapp=fopen(file3,"w");
		fout=fopen(file2,"r");
		fapp=fopen(file3,"a");

		if(fin==NULL)
		{
				printf("\n file1 could not be open.");
				exit(0);
		}
		if(fout==NULL)
		{
				printf("\n file2 could not be open.");
				exit(0);
		}
		if(fapp==NULL)
		{
				printf("\n file3 could not be open.");
				exit(0);
		}

		while((ch=fgetc(fin))!=EOF)
		{
				fputc(ch,fapp);
		}
		while((ch=fgetc(fout))!=EOF)
		{
				fputc(ch,fapp);
		}
		printf("\n file1 & file2 successfully copied in file3.");
		fclose(fin);
		fclose(fout);
		fclose(fapp);
getch();
}
