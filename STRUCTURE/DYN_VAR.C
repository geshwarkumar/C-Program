/*array of structure variablen for dynamic memory allocation in run time by Nupendra verma 28/10/2015*/
#include<stdio.h>
#include<conio.h>
struct Person
{
  char name[25];
  int age;
}*p;
void main()
{
  //struct Person p[3];
  int i,n;
  clrscr();
  printf("\nEnter the number of person::");
  scanf("%d",&n);
  p=(struct Person *) malloc(n*sizeof(struct Person));   //Daynamic allocation
  for(i=0;i<n;i++)
  {
	printf("\nEnter name::");
	fflush(stdin);
	gets(p[i].name);
	printf("\nEnter age ::");
	scanf("%d",&p[i].age);
  }
  printf("\n__________Entered data is Followes _____________");
  for(i=0;i<n;i++)
  {
	printf("\nThe age of Mr. %s is %d ",p[i].name,p[i].age);
  }
  getch();
}


