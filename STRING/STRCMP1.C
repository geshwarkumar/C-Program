/*Program to implement strcmp()-02/10/2015*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int iter=0,count=0;
	char str1[10],str2[10];
	clrscr();

	printf("\n Enter first string:");
	scanf("%s",&str1);

	printf("\n Enter second string:");
	scanf("%s",&str2);

	while(str1[iter]==str2[iter]&&str1[iter]!='\0')
	{
		iter++;
	}
		if(str1[iter]<str2[iter])
		{
			printf("\n%s is lessthan %s.",str1,str2);

		}
	       else if(str1[iter]>str2[iter])
		{
			printf("\n%s is greaterthan %s.",str1,str2);

		}
		else
		{
		      printf("\n %s and %s are eual.",str1,str2);
		}
	/*iter++;
	} */
	/*if(count==iter+1)
	{
		printf("\n %s and %s are eual.",str1,str2);
		break;
	}  */
getch();

}