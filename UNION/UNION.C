/*Program to demonstrate union-Geshwar Kumar-29/10/2015*/
#include<conio.h>
#include<stdio.h>
struct Person
{
		float sai;
		int age;
		char name[10];
};
union Human
{
		float sai;
		int age;
		char name[10];
};
void main()
{
		struct Person p1;
		union Human h1;
		cirscr();
		printf("\n The size os structure variable p1 is : %d",sizeof(p1));
		printf("\n The size os union variable h1 is : %d",sizeof(h1));
getch();
}