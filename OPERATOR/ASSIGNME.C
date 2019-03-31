/*Program to demonstrate Assignment operator
-Geshwar Kumar
-23/11/2015*/

void main()
{

	int ass,var=10;
	clrscr();
	printf("...PROGRAM FOR ASSIGNMENT OPERATOR...\n");
	printf("\n Definition: Used to perform arithmetic operation while assigning a value to a variable.\n");
	printf("\n Enter the number:\n");
	scanf("%d",&ass);

	printf("\n<<<FOLLOWING TYPES ASSIGNMENT OPERATOR`S USED IN C LANG. >>>\n");

	printf("\n Given value = %d",ass);
	printf("\n 1.\"=\" (Assign equal to), ex.: ass = var + 10 = %d\n\t Equivalent Exp.:ass=var + 10",ass=var+var);
	printf("\n 2.\"+=\" (Assign addition), ex.: ass += 10 = %d\n\t Equivalent Exp.:ass=ass + 10",ass+=10);
	printf("\n 3.\"-=\" (Assign sutraction), ex.: ass -= 10 = %d\n\t Equivalent Exp.:ass=ass - 10",ass-=10);
	printf("\n 4.\"*=\" (Assign multiplication), ex.: ass *= 10 = %d\n\t Equivalent Exp.:ass=ass * 10",ass*=10);
	printf("\n 5.\"/=\" (Assign division), ex.: ass /= 10 = %d\n\t Equivalent Exp.:ass=ass / 10",ass/=10);
	printf("\n 6.\"%%=\" (Assign modulus), ex.: ass %%= 10 = %d\n\t Equivalent Exp.:ass=ass % 10",ass%=10);

getch();
}