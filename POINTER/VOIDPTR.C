/*Program to demonstrate void pointer-Geshwar Kumar-14/10/2015*/
#include<stdio.h>
#include<conio.h>

void main()
{
		int arr[]={1,2,3,4,5};	//array declaration
		char ch[30]="I am a programmer";	//character type variable
		int *ptr;         //pointer variable
		void *pvoid;	//void type pointer variable
		int iter;	//iterator variable

		clrscr();

		ptr=arr; 	//passing address of array variable in ptr
		pvoid=arr;	//pass address of arr in void pointer
		printf("\n Values of array variable :");
		printf("\n array posiotion - value - address\n");
		for(iter=0;iter<5;iter++)
		{
			printf("\narr[%d] - %d - %x",iter,*(ptr+iter),ptr+iter);
			printf("\tarr[%d] - %d - %x",iter,*((int*)pvoid+iter),(int *)pvoid+iter);	//type conversion void to integer
		}
		/*printf("\n and:");
		pvoid=arr;	//pass address of arr in void pointer
		for(iter=0;iter<5;iter++)
		{
			printf("\narr[%d]>>%3d\t%x",iter,*((int*)pvoid+iter),(int *)pvoid+iter);	//type conversion void to integer
		} */

		printf("\nValues of character variable:");
		pvoid=ch;
		for(iter=0;iter<strlen(ch);iter++)
		{
			printf("\n%c - %x",*((char*)pvoid+iter),(char*)pvoid+iter);	//type conversion void to character
		}
		printf("\n Address of ch is=%x - %x",(char*)pvoid,(char*)pvoid[iter]);

getch();
}