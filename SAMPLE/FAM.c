/*Program to demonstrste file access mode in file handling function -Geshwar Kumar-31/10/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		char source[30],dest[30];
		FILE *fin,*fout;
		char ch;
		clrscr();
		printf("\n <<< Program to copy a file into a new file >>>\n");

		printf("\n Enter the source file: ");
		scanf("%s",source);
		printf("\n Enter the destination file: ");
		scanf("%s",dest);

		fin=fopen(source,"r");
		fout=fopen(dest,"w");

		if(fin==NULL)
		{
				printf("\n Sourse file could not be open.");
				exit(0);
		}
		if(fin==NULL)
		{
				printf("\n Destination file could not be open.");
				exit(0);
		}

		while((ch=fgetc(fin))!=EOF)
		{
				fputc(ch,fout);
		}
		printf("\n Source file successfully copied in destination file.");
		fclose(fin);
		fclose(fout);
getch();
}