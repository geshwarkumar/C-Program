 /*PROGRAM TO TAKE SENTENCE AS INPUT AND CONVERT THE STRING SO THAT THE FIRST LETTER OF EACH WORD IS IN UPPER CASE
 -GESHWAR KUMAR
 -08/07/2016*/
 
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	/*DECLARATION*/
	char str[100];
	int iter=0;
	/*INPUT*/
	
	printf("\n Enter any sentence:\n");
	scanf("%[^\n]s",str;
	
	/*PROCESSING*/
	while(ptr != '\0')
	{
		str[0] = toupper(str[0]);
		if (ptr == ' ')
		{
			ptr = toupper(str[++iter]);
		}
		else if(ptr != ' ')
		{
			ptr = tolower(ptr);
		}
		iter++;
	}
	/*OUTPUT*/
	printf("\n Converted String is:\n %s",str);
	//printf("\n Converted String is:\n %s",str);
return 0;
}
