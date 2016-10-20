#include<stdio.h>
#include<conio.h>
void main()
{
 int r;
 clrscr();
 printf("Enter the Number\n");
 scanf("%d",&r);
 if(r>0)
 printf("\nEntered Number %d is +VE",r);
 else if(r<0)
 printf("\nEntered Number %d is -VE",r);
 else if(r==0)
 printf("\nEntered Number is Zero\n");
 else
  printf("\nYou have not entered a valid numeric");
 getch();
 }
