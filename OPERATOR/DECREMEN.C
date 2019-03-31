/*Program to demonstrate Decrement operator
-Geshwar Kumar
-23/11/2015*/

void main()
{

	int post,pre;
	clrscr();
	printf("...PROGRAM FOR DECREMENT OPERATOR...\n");
	printf("\n Definition: Used to decrease the value of an integer or character variable by 1.\n");
	printf("\n Enter the number for postfix operation:\n");
	scanf("%d",&post);
	printf(" Enter the number for prefix operation:\n");
	scanf("%d",&pre);

	printf("\n<<<FOLLOWING TYPES DECREMENT OPERATOR`S USED IN C LANG. >>>\n");

	printf("\n 1.\"post--\" (Post fix), ex.:\n\tBefore applying operation:\n\t\t Given value = %d",post);
	post=post--;
	printf("\n\tAfter applying operation:\n\t\t Current value(/Increase value) = %d",post);

	printf("\n 2.\"--pre\" (Pre fix), ex.:\n\tBefore applying operation:\n\t\t Given value = %d",pre);
	printf("\n\tAfter applying operation:\n\t\t Current value(/Increase value) = %d",--pre);

	printf("\n Note:\n\t In postfix first the original value used then the value decrease by 1.");
	printf("\n\t In prefix decrease first then used then the new evalueted value.");


getch();
}