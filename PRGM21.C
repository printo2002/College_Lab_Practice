// 21. Program to print multiplication table of a number using for loop.


#include<stdio.h>
#include<conio.h>
void main()
{
 int num,limit,i,m;
 clrscr();
 printf("Enter a number to show its multiplication  table.");
 scanf("%d",&num);

 printf("Enter the end point of the multiplication table.");
 scanf("%d",&limit);
 
 printf("Multiplication Table of %d",num);
 for(i=1;i<=limit;i++)
 {
   m = num * i;
   printf("%d * %d = %d",num,i,m);
 }

 getch();
}