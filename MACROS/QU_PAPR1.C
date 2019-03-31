#include<stdio.h>
#include<conio.h>
#define BIG >
#define SMALL <
void main()
{
  int a=111,b=21,c=4,d=23;
  clrscr();
  if(a BIG b&&a BIG c&&a BIG d)
  {
	 printf("A is Big %d",a);
  }
  else if(b BIG a&&b BIG c&&b BIG d)
  {
	printf("B is Big %d",b);
  }
  else if(c BIG a&&c BIG b&&c BIG d)
  {
	printf("C is Big %d",c);
  }
  else if(a SMALL d&&c SMALL d&&b SMALL d)
  {
	printf("D is Big %d",d);
  }
  else
  {
	printf("all variable value is equal");
  }




  getch();
}
