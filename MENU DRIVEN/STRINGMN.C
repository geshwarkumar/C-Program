/*Progmram to demonstrate all string function using menu driven concept
-Geshwar Kumar
-28/10/2015*/
#include<stdio.h>
#include<conio.h>

#include<string.h>

int num,iter;
char op,str[10];	//Global variable declaration

void main()   //Main function
{
			clrscr();
			iter=0;
start:do             //Label1
			{
				 printf(" String functions:\n");
				 printf("\n 1. Calculate legth of given string.");
				 printf("\n 2. Make duplicate string/copy string.");
				 printf("\n 3. Concatenat two string.");
				 printf("\n 4. Compare two string.");
				 printf("\n 5. Exit.");
				 printf("\n\n Enter your choise(1-5): ");
choise:	 scanf("%d",&num);       //Label2

				 switch(num)
				 {
						case 1:
									printf("\n Enter any string: ");
									scanf("%s",&str);
									while(str[iter]!='\0')
									{
										iter++;
									}
									printf("\n Length of %s is \"%d\".\n",str,iter);
						break;	// End case 1.
						case 2:
						break; //End case 2.
						case 3:
						break;	//End case 3.
						case 4:
						break;  //End case 4.
						case 5:exit(0);
						break;  //End case 5.
						default:printf("Wrong choise...???\nEnter your choise again: ");
										goto choise;         //Jump in Label2
				 }
				 printf("\n Do you want to continue,(y/n): ");
message: fflush(stdin);                     //Label3
				 scanf("%c",&op);
				 clrscr();
			}while(op=='y'||op=='Y');// Do...while loop closed
			if(op=='n'||op=='N')	//Condition for yes or no
			{
					exit(0);
			}
			else if(op=='y'||op=='Y')
			{
					goto start;		//Jump in Label1
			}
			else
			{
					printf("\n Wrong input,please press y/n: ");
					goto message;  //Jump in Label3
			}
getch();
}