/*Program to demonstrate fscanf  and fprintf function
-Geshwar Kumar
-04/11/2015*/
#include<conio.h>
#include<stdio.h>

void main()
{
		FILE *fp;
		char s[20];
		int t;
		if((fp=fopen("C:\\Turboc3\\MCA1\\file3.txt","w"))==NULL)
		{
				printf("\n File could not be open...Error");
				exit(0);
		}
		printf("\n Enter the name of student and total: ");
		fscanf(stdin,"%s%d",s,&t);
		fprintf(fp,"%s %d",s,t);
		fclose(fp);
		if((fp=fopen("C:\\Turboc3\\MCA1\\file1.txt","r"))==NULL)
		{
				printf("\n Cannot open file...");
				exit(1);
		}
		fscanf(fp,"%s%d",s,&t);
		fprintf(stdout,"%s %d",s,t);
getch();
}
