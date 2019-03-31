/*Program to write record using structure in binary fh
-Geshwar Kumar
-05/11/2015*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
		int eid,sal;
		char name[20];
};

void main()
{
		struct employee e;
		FILE *fp;
		char ans;
		clrscr();
		fp=fopen("C:\\Edata","a");
		if(fp==NULL)
		{
				printf("\n Can not create a Edata file.");
				exit(0);
		}
		do
		{
				//e=(struct employee *)malloc(sizeof(struct employee));
				printf("\n Enter employee ID: ");
				scanf("%d",&e.eid);
				printf("\n Enter the name of employee: ");
				scanf("%s",e.name);
				printf("\n Enter salary of employee: ");
				scanf("%d",&e.sal);
				fwrite(&e,sizeof(e),1,fp);
				printf("\n Record had successfully insert.");
				printf("\n Do you want to add more record(y/n): ");
				fflush(stdin);
				scanf("%c",&ans);
		}while(ans=='y'||ans=='Y');
		fclose(fp);
		fp=fopen("C:\\Edata","r");
		while(fread(&e,sizeof(e),1,fp)==1)
		{
				printf("\n Employee ID = %d,Name = %s earn %d per month.",e.eid,e.name,e.sal);
		}
		printf("\n Press any key for EXIT...");
		fclose(fp);

getch();
}
