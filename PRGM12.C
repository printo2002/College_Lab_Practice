// 12. Program to find factorial of a number.


#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,f=1;
  clrscr();
   printf("Enter a number to find factorial: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
    f = f * i;
   }
   printf("Factorial of %d is %d",n,f);
  getch();
}