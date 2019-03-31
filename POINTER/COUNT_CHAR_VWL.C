/*C PROGRAM TO TAKE A CHAR ARRAY AS INPUT AND PRINT THE NUMBER OF CHARACTERS,VOWELS IN THAT ARRAY USING POINTER.(USE OF STRING)
-GESHWAR KUMAR
-07/07/2016*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	/*VARIABLE DECLARATION*/
	char str[100],iter;
	char *ptr,ch;
	int vwl=0,count=0;
	
	/*INPUT*/
	ptr = &str[0] ;
	printf("\n Enter any line:\n");
	scanf("%[^\n]s",ptr);
	
	/*PROCESSING*/
	while((ch=tolower(str[iter++]))!='\0')
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			vwl++;
		}		
		count++;
	}
	/*OUTPUT*/
	printf("\n Total number of character = %d.",count);
	printf("\n Total number of vowels = %d.",vwl);
return 0;
}
