#include<stdio.h>
#include<conio.h>
void main()
{
      int r,b,s;
      for(r=1;r<=4;r++)
      {
	for(b=1;b<=4-r;b++)
	printf(" ");
	for(s=1;s<=2*r-1;s++)
	printf("*");
	printf("\n");
      }
      getch();
}