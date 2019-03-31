/*Program to demonstrate nested structure-Geshwar Kumar-29/10/2015*/
#include<conio.h>
#include<stdio.h>
struct Dob
{
		int day;
		char *month;
		int year;
};
struct Person
{
		char *name;
		struct Dob d1;
};
void main()
{
		struct Person p1;
		clrscr();
		printf("\n Enter name:");
		fflush(stdin);
		gets(p1.name);
		printf("\n Enter Date of birth in format DD-MON-YY");
		printf("\n Enter Date(DD): ");
		scanf("%d",&p1.d1.day);
		printf("\n Enter Month(MON): ");
		fflush(stdin);
		gets(p1.d1.month);
		printf("\n Enter Year(YY): ");
		scanf("%d",&p1.d1.year);
		printf("\n Welcome,%s \n Youe Enterd Date of birth is %d-%s-%d ",
		p1.name,p1.d1.day,p1.d1.month,p1.d1.year);
getch();
}