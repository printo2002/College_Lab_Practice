// 41. Program to swap two numbers using call by value and call by reference.

#include<stdio.h> 
#include<conio.h>

int swapByValue(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  printf("===== After swapByValue =====\n A = %d, B = %d\n", a, b);
}

void swapByReference(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("===== After swapByReference =====\n A = %d, B = %d\n", *a, *b);
}

void main()
{
  int a, b;
  clrscr();
  printf("Enter 1st  numbers: \t");
  scanf("%d", &a);
  printf("Enter 2nd numbers: \t");
  scanf("%d",&b);

  printf("\nBefore swapping: A = %d, B = %d\n", a, b);

  swapByValue(a, b);

  swapByReference(&a, &b);



 getch();
}
