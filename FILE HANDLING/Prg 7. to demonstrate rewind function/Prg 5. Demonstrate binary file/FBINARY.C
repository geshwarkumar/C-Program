/*Program to demonstrate binary file
-Geshwar Kumar
-05/11/2015*/

#include<stdio.h>
#include<conio.h>

void main()
{
		FILE *source,*even,*odd;
		int i,n;
		clrscr();
		printf("\n Enter to data to a file,Enter 0 to exit :");
		source=fopen("C:\\Turboc3\\MCA1\\Data","w");
		if(source==NULL)
		{
				printf("\n Can not create a Data file.");
				exit(1);
		}
		for(i=0;i<20;i++)
		{
				printf("\n Enter number:");
				scanf("%d",&n);
				if(n==0)
					break;
				putw(n,source);
		}
		fclose(source);
		source=fopen("C:\\Turboc3\\MCA1\\Data","r");
		odd=fopen("C:\\Turboc3\\MCA1\\Odd","w");
		even=fopen("C:\\Turboc3\\MCA1\\Even","w");
		while((n=getw(source))!=EOF)
		{
				if(n%2==0)
					putw(n,even);
				else
					putw(n,odd);
		}
		fclose(source);
		fclose(even);
		fclose(odd);
		printf("\n The content of even.dat are as follows:\n");
			even=fopen("C:\\Turboc3\\MCA1\\Even","r");
			while((n=getw(even))!=EOF)
				printf("%5d",n);
		printf("\n The content of odd.dat are as follows:\n");
			odd=fopen("C:\\Turboc3\\MCA1\\Odd","r");
			while((n=getw(odd))!=EOF)
				printf("%5d",n);
		fclose(even);
		fclose(odd);

getch();
}
