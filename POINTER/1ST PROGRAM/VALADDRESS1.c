/*C PROGRAM TO PRINT ADDRESS OF VARIABLE IN MEMORY LOCATION
-GESHWAR KUMAR
-13/08/2017*/

#include<stdio.h>

int main(){
	
	int i=3;
	
	printf("Address of i = %u\n",&i);
	printf("Value of i = %d\n",i);
	printf("Value of i = %d\n",*(&i));
return 0;
}
