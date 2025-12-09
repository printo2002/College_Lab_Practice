// 2. Program to check whether the given number is odd or even.

#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter a Number\n");
  scanf("%d",&a);
  
  if(a%2==0)
  {
    printf("%d is an even number",a);
  }
  else
  {
    printf("%d is an odd number",a);
  }

getch();
}
