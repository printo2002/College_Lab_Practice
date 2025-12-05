// 18. Program to check whether a number is Armstrong or not.

#include<stdio.h>
#include<conio.h>
void main()
{
 int num,rem,arm=0,cpy;
 clrscr();
 printf("Enter a number : \t");
 scanf("%d",&num);
 cpy=num;
 while(num>0)
 {
  rem=num%10;
  arm=arm+(rem*rem*rem);
  num=num/10;
 }
 if(arm==cpy)
  printf("Enterd number is armstrong number");
 else
  printf("Entered number is not armstrong");
 getch();
}