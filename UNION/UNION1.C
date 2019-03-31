/*Program to demonstrate union-Geshwar Kumar-29/10/2015*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct Person
{
		float sal;
		int age;
		char name[10];
};
union Human
{
		float sal;
		int age;
		char name[10];
};
void main()
{
		struct Person p1;
		union Human h1;
		clrscr();

		p1.sal=2013.80;
		p1.age=45;
		strcpy(p1.name,"Aryan");
		h1.sal=2013.80;
		h1.age=45;
		strcpy(h1.name,"Aryan");
		printf("\n Mr. %s earns %f per day at the age of %d.",p1.name,p1.sal,p1.age);
		printf("\n Mr. %s earns %f per day at the age of %d.",h1.name,h1.sal,h1.age);

getch();
}