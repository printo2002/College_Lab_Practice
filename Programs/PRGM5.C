// 5. Program to check whether a year is a leap year or not.

#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 clrscr();
 printf("Enter a year:\n");
 scanf("%d",&year);

 if((year % 4 == 0) || (year % 400 == 0))
 {
  printf("%d is a leap year.",year);
 }
 else{
  printf("%d is not a leap year");
 }

getch();
}