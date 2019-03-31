/*Program to demonstrate rewind()
-Geshwar Kumar
-06/11/2015*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int num;
	char ch;
	clrscr();
	fp=fopen("C:\\Turboc3\\BIN\\Data","w+");
	if(fp==NULL)
	{
		printf("\n File can not be create...");
		exit(0);
	}
	do
	{
		printf("\n Enter any number: ");
		fscanf(stdin,"%d",&num);
		fprintf(fp,"%d\t",num);
		printf("\n Do you want to continue...: ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');
	rewind(fp);
	while((fscanf(fp,"%d",&num))!=EOF)
	{
		fprintf(stdout,"%5d",num);
	}
getch();
}