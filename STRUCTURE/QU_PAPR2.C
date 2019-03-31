#include<stdio.h>
#include<conio.h>
struct cricket
{
  char ply_nam[10];
  char team[10];
  int  bt_avg[10];
}c[1];
void main()
{
   int i;
   clrscr();
   for(i=0;i<50;i++)
   {
	  printf("\nEnter player name::");
	  scanf("%s",c[i].ply_nam);
	  printf("\nEnter Team name::");
	  scanf("%s",c[i].team);
	  printf("\nEnter player batting average::");
	  scanf("%d",& c[i].bt_avg[i]);
   }
   printf("\n~~~~~~~~~~~~Detail of player~~~~~~~~~~~~\n");
   for(i=0;i<50;i++)
   {
	  printf("\nPlayer name::%s",c[i].ply_nam);
	  printf("\nTeam name::%s",c[i].team);
	  printf("\nPlayer batting average::%d",c[i].bt_avg[i]);
   }
   getch();
}

