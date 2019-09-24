#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
     int a,b,c,choice;
     char ch;
     ch='N';
     clrscr();
     printf("enter two number");
     scanf("%d %d",&a,&b);
     printf("1.addition \n");
     printf("2.subtraction \n");
     printf("3.multiplaction \n");
     printf("4.division \n");
     printf("enter your choice \n");
     scanf("%d",&choice);
     do
     {
     switch(choice)
      {
	  case 1:
	      c=a+b;
	      printf("addition is %d\n",c);
	      break;
     case 2:
	      c=a-b;
	      printf("subtraction is %d\n",c);
	       break;
     case 3:
	     c=a*b;
	     printf("muliplaction is %d\n",c);
	     break;
     case 4:
	     c=a/b;
	     printf("division is %d\n",c);
	     break;
	  default:
	   printf("entered wrong choice \n");
      }
       printf("press 'Y'for continue");
       fflush(stdin);
       scanf("%c",&ch);

   }  while(ch=='Y');

     getch();
}