/*C PROGRAM TO PRINT ADDRESS OF VARIABLE IN MEMORY LOCATION
-GESHWAR KUMAR
-13/08/2017*/

#include<stdio.h>

int main(){
	
	int i=3,*j;

	j = &i ;

	/*ADDRESS*/	
	printf("Address of i = %u\n",&i);
	printf("Address of i = %u\n",j);
	printf("Address of j = %u\n",&j);
	/*VALUES*/
	printf("Value of j = %u\n",j);
	printf("Value of i = %d\n",i);
	printf("Value of i = %d\n",*(&i));
	printf("Value of i = %d\n",*j);
	printf("Value of i = %d\n",*(*(&j)));
return 0;
}
