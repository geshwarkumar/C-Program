/*Program to demonstrate Type casting/Explicit operation
-Geshwar Kumar
-28/11/2015*/

void main()
{
	/*SYNTAX : (DATA TYPE)<EXPRESSION>*/
	int num1,num2;	//integer type variable declaration
	float res;	//float type variable declaration
	clrscr();

	num1=5,num2=2;
	//num1=2.5;	//value initilization

	res=(float) num1 / num2;	//division operation

	printf("\n Entered number is :\n\t num1=%d\n\t num2=%d\n Division of given number is = %f",num1,num2,res);

getch();
}

