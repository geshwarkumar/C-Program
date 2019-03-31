/*A program to Menu editing with array-Geshwar Kumar-15/09/2015*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
/*Globel variable declaration*/
int iter,num,size,temp;
char arr[5],op;

void main()
{

		clrscr();
		iter=0;
		size=5;
open:		do
		{
			printf("Your choise are:\n");
			printf("\n 1.Insert element in array");
			printf("\n 2.Print array element");
			printf("\n 3.Search for element in array");
			printf("\n 4.Delete element of array");
			printf("\n 5.Exit\n");
			printf("Enter your choise(1-5):");
			scanf("%d",&num);

			switch(num)
			{
					case 1:
								 printf("\nInsert %d element in an array:\n",size);
								 if(iter<size)
								 {
										scanf("%d",&arr[iter]);
										iter++;
								 }
								 else
								 {
											printf("\nArray memory is full not allows other.");
											break;
								 }
								break;
					case 2:printf("%d element are:\n",size);
								 for(iter=0;iter<size;iter++)
								 {
										printf("\n%d elment in potion %d",arr[iter],iter);
										//iter++;
								 }
								break;
					case 3:
								printf("Enter search element which you want:");
								scanf("%d",&temp);
								for(iter=0;iter<size;iter++)
								{
									if(temp==arr[iter])
									{
										break;
									}
									else
									{
										printf("\n%d element not in array.",arr[iter]);

									}
								}
								printf("\n%d element in place of %d.",arr[iter],iter);
								break;
					case 4:
								printf("Enter delete element which you want:");
								scanf("%d",&temp);
								for(iter=0;iter<size;iter++)
								{
									if(temp==arr[iter])
									{
										arr[iter]=arr[iter+1];
										break;
									}
									else
									{
										printf("\n%d element not in array.",arr[iter]);
										break;
									}
								}
								break;
					case 5:exit(0);
								//break;
					default:printf("\nPlease select option into 1-5.");
				}
msg:			printf("\nDo you wish to continue(y/n):");
			fflush(stdin);
			scanf("%c",&op);
			clrscr();
		}while(op=='y'||op=='Y');
		if(op=='n'||op=='N')
		{
			exit(0);
		}
		else if(op=='y'||op=='Y')
		{
			goto open;
		}
		else
		{
			printf("Wrong input please select Y/N:");
			goto msg;
		}
getch();
}
