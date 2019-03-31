/*C PROGRAM TO PRINT ADDRESS OF VARIABLE INTENT IN MEMORY LOCATION
-GESHWAR KUMAR
-17/08/2017*/

#include<stdio.h>

int main(){
	
	int i=3,*j,**k;

	j = &i ;
	k = &j ;

	/*ADDRESS*/	
	printf("Address of i = %u\n",&i);
	printf("Address of i = %u\n",j);
	printf("Address of i = %u\n",*k);
	printf("Address of j = %u\n",&j);
	printf("Address of j = %u\n",k);
	printf("Address of k = %u\n\n",&k);
	/*VALUES*/
	printf("Value of k = %u\n",k);
	printf("Value of j = %u\n",j);
	printf("Value of i = %d\n",i);
	printf("Value of i = %d\n",*(&i));
	printf("Value of i = %d\n",*j);
	printf("Value of i = %d\n",**k);
return 0;
}
