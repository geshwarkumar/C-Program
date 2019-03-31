/*Program to demonstrate Bitwise operator
-Geshwar Kumar
-27/11/2015*/

void main()
{

	int bit,bit1;
	clrscr();
	printf("...PROGRAM FOR BITWISE OPERATOR...\n");
	printf("\n Definition: Used to perform operation of data at bit level and binary digit level.\n");
	printf("\n Enter two number:\n");
	scanf("%d%d",&bit,&bit1);

	printf("\n<<<FOLLOWING TYPES BITWISE OPERATOR`S USED IN C LANG. >>>\n");

	printf("\n Given value = %d",bit);
	printf("\n 1.\"<<\" (left shift), ex.: num << 2 = %d",bit<<2);
	printf("\n 2.\">>\" (right shift), ex.: num >> 2 = %d",bit>>2);
	printf("\n 3.\"~\" (inverse/1`s complement), ex.: ~num = %d",~bit);
	printf("\n 4.\"&\" (bitwise logical AND), ex.: num1 & num2 = %d",bit&bit1);
	printf("\n 5.\"|\" (bitwise logical OR), ex.: num1 | num2 = %d",bit|bit1);
	printf("\n 6.\"^\" (bitwise X-OR), ex.: num1 ^ num2 = %d",bit^bit1);

getch();
}