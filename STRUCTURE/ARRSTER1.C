/*Program to demonstrate array of structure using pointer-Geshwar Kumar-29/10/2015*/
#include<conio.h>
#include<stdio.h>
struct Person
{
		char name[25];
		int age;
};
void main()
{
		struct Person *p;
		int i,n;
		clrscr();
		printf("\n Enter the number of person: ");
		scanf("%d",&n);
		p=(struct Person *)malloc(n*sizeof(struct Person));
		for(i=0;i<n;i++)
		{
				printf(" Enter name: ");
				fflush(stdin);
				gets(p[i].name);
				printf(" Enter age: ");
				scanf("%d",&p[i].age);
		}
		printf("\n~~~~~~Entered Data is as Follows~~~~~~\n");
		for(i=0;i<n;i++)
		{
				printf("\n The age of Mr. %s is %d.",p[i].name,p[i].age);
		}
getch();
}