/*Program to demonstrate conditional/ternary operator
-Geshwar Kumar
-23/11/2015*/

void main()
{

	int val1,val2,res;
	clrscr();
	printf("...PROGRAM FOR CONDITIONAL/TERNARY OPERATOR...\n");
	printf("\n Definition: Used to chack condition and select a value depending on the value of the condition.\n");
	printf("\n Enter two number:\n");
	scanf("%d%d",&val1,&val2);

	printf("\n<<<FOLLOWING WAY TERNARY OPERATOR USE IN C LANG. >>>\n");

	printf("\n Syntax:\n\t variable = (condition) ? value1 : value2 ;");
	printf("\n Example:\n\t Given values:\n\t First value=%d Second value=%d",val1,val2);
	res=(val1>val2)?val1:val2;
	printf("\n\t Biggest element = %d",res);
	printf("\n Evaluate in this way:\n\t res = (val1 > val2) ? val1 : val2 ;\n\t res = ( %d > %d) ? %d : %d",val1,val2,val1,val2);
getch();
}