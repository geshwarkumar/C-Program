/*Program to create & display Student record using function & structure
-Geshwar Kumar
-08/11/2015*/

#include<stdio.h>
#include<conio.h>

struct std_Record  	//Structure variable definition
{
	char name[20],add[30];
	int age;
}std;
struct std_Record create();   //function declaration
void display(struct std_Record std);  //function declaration

void main()     //main function
{
	//int num;
	struct std_Record std;	//structure variable declaration
	clrscr();
	/*printf("\n How many student record : ");
	scanf("%d",&num);*/
	std=create();
	display(std);
getch();
}
struct std_Record create() 	//function definition
{
	struct std_Record rec;
	int i;
	printf("Enter three students record:\n");
	for(i=0;i<3;i++)
	{
		printf(" Enter name: ");
		fflush(stdin);
		scanf("%s",rec.name);
		printf(" Enter age: ");
		scanf("%d",&rec.age);
		printf(" Enter address: ");
		fflush(stdin);
		scanf("%s",rec.add);
		//return std;
	}
	return rec;
}
void display(struct std_Record std)	//function definition
{
	int i;
	/*for(i=0;i<3;i++)
	{ */
		printf("\n Name : %s Age : %d Address : %s",std.name,std.age,std.add);
	//}
}
