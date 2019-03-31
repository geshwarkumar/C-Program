/*WAP TO CREATE and Display STRUCTURE STUDENT Record USING FUNCTION*/
//Geshwar Kumar
// 07/11/2015
#include<stdio.h>
#include<conio.h>
struct stud input();
void display(struct stud);

struct stud
{
	char name[20],add[20];
	int age;
}stud1,stud2,stud3;
void main()
{
	clrscr();
	printf("-------------------Enter The record of 3 students-----------");
	stud1=input();
	stud2=input();
	stud3=input();
	printf("\n-----------RECORD ADDED SUCESSFULLY-----------");
	display(stud1);
	display(stud2);
	display(stud3);
getch();
}
struct stud input()
{
	struct stud x;
	printf("\nEnter The name of student:: ");
	fflush(stdin);
	scanf("%[^\n]s",&x.name);
	printf("\nEnter the age of student:: ");
	scanf("%d",&x.age);
	printf("\nEnter the address of student:: ");
	fflush(stdin);
	scanf("%[^\n]s",&x.add);
	return x;
}
void display(struct stud y)
{
	printf("\nThe name of student:: %s",y.name);
	printf("\nThe age of student:: %d ",y.age);
	printf("\nEnter the address of student:: %s",y.add);
}
