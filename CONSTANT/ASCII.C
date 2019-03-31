/*Program to print all ASCII values*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int iter;
	//clrscr();

	printf("ASCII Character set:\n");
	printf("ASCII value = Character\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~\n");

	for(iter=0;iter<=127;iter++)
	{
		printf("%d = %c\t",iter,iter);

	}

getch();
}
