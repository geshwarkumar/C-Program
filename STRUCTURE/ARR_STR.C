/*Program to define a structure of student using array within/in structure-Geshwar Kumar-11/11/2015*/
#include<stdio.h>
#include<conio.h>
struct student  	//Structure definition
{
	char name[10];
	int rollno;
	int marks[3];
}std[10];
void main()
{
	int num,iter,i;
	clrscr();
	printf("\n How many students record : ");
	scanf("%d",&num);

	printf("\nEnter %d student record : ",num);
	for(iter=0;iter<num;iter++)
	{
		printf(" Name : "); scanf("%s",std[iter].name);
		printf(" Roll no. : "); scanf("%d",&std[iter].rollno);
		printf(" Marks(out of 100) :\n");
		for(i=1;i<=3;i++)
		{
			printf(" Enter the marks of %d subject:",i); scanf("%d",&std[iter].marks[i]);
		}
	}
	printf("\nDetails of student with total marks :-");
	for(iter=0;iter<num;iter++)
	{
		printf("\n Name:%s Roll No.:%d Marks:\n",std[iter].name,std[iter].rollno);
		for(i=1;i<=3;i++)
			printf(" \t%d subject : %d",i,std[iter].marks[i]);
	}
getch();
}

