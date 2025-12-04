// 1. Program to find the absolute value using conditional operator.

#include<stdio.h>
#include<conio.h>
void main()
{
int num, absvalue;
clrscr();
printf("Enter a number\n");
scanf("%d",&num);

absvalue = (num < 0)? -num:num;

printf("%d is an absolute value",absvalue);
    
getch();
}