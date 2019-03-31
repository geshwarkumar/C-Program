/*Program to create a structure employee using array of structure
-Geshwar Kumar
-15/01/2016*/

#include<stdio.h>
#include<conio.h>

struct Employee
{
	int empID,sal;//empID=ID number,sal=Salary
	char name[20],des[10];//des=designation,name=employee name
}emp[10];

void main()
{
	int iter;
	clrscr();
	/*Input method*/
	for(iter=0;iter<10;iter++)
	{
		printf("Enter the %d employee details:\n",iter+1);
		printf("Employee ID : ");scanf("%d",&emp[iter].empID);
		printf("Name : ");scanf("%s",emp[iter].name);
		printf("Designation : ");scanf("%s",emp[iter].des);
		printf("Salary : ");scanf("%d",&emp[iter].sal);
	}
	/*Output method*/
	for(iter=0;iter<10;iter++)
	{
		printf("\n %d employee details:\n",iter+1);
		printf("Employee ID : %d",emp[iter].empID);
		printf("Name : %s",emp[iter].name);
		printf("Designation : %s",emp[iter].des);
		printf("Salary : %d",emp[iter].sal);
	}
getch();
}


