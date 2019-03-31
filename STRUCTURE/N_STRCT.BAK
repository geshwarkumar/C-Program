/*Program to define a structure and other structure within the structure
-Geshwar Kumar
-09/11/2015*/

#include<stdio.h>
#include<conio.h>

struct employee  	//Outer Structure definition
{
	char name[10];
	int sal,age;
	struct address  //Inner structure definition
	{
		char locality[10],city[10],state[10];
		int house_no;
	}add;
};
void main()
{
	struct employee emp;
	clrscr();
	printf("\n<<< INPUT EMPLOYEE DETAILS >>>\n");
	printf("\n Enter:-");
	printf("\nName: ");scanf("%s",emp.name);
	printf("Age: ");scanf("%d",&emp.age);
	printf("Salary: ");scanf("%d",&emp.sal);
	printf("\n Enter Address:-");
	printf("\nHouse number: ");scanf("%d",&emp.add.house_no);
	printf("Locality: ");scanf("%s",emp.add.locality);
	printf("City: ");scanf("%s",emp.add.city);
	printf("State: ");scanf("%s",emp.add.state);

	printf("\n<<< EMPLYEE DETAILS ARE >>>");
	printf("\n Name : %s",emp.name);
	printf("\n Age : %d",emp.age);
	printf("\n Salary : %d",emp.sal);
	printf("\n Address : HNo.%d Locality  %s",emp.add.house_no,emp.add.locality);
	printf("\n City  %s State %s.",emp.add.city,emp.add.state);
getch();
}

