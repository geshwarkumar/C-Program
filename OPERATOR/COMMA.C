/*Program to demonstrate Additional operator comma
-Geshwar Kumar
-27/11/2015*/

void main()
{

	int num1=10,num2=20,temp;
	clrscr();
	printf("...PROGRAM FOR ADDITIONAL OPERATOR COMMA...\n");
	printf("\n Definition: Used in programming to seperate the declaration of multiple variable.");

	printf("\n<<<FOLLOWING WAY COMMA OPERATOR USED IN C LANG. >>>\n");

	printf("\n SYNTAX : [datatype] <variable 1,variable 2,variable 3,...,variable n>;");
	printf("\n EXAMPLE :");
	printf("\n\t>> Initialization: int num1=10,num2=20,temp;");
	printf("\n\t>> Applied operation: temp=num1, num1=num2, num2=temp;");
	temp=num1, num1=num2, num2=temp;
	printf("\n\t>> Results: Value of num1 = %d",num1);
	printf("\n\t\t    Value of num2 = %d",num2);

getch();
}