// 4. Program to interchange the value of 2 variables (swapping).

#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,temp=0;
 clrscr();
 printf("Enter the first no:\n");
 scanf("%d",&a);
 printf("Enter the second no: \n");
 scanf("%d",&b);

 printf("Before Swapping: a= %d, b= %d\n",a,b);

 temp =a;
 a=b;
 b=temp;

 printf("After Swapping: a= %d,b= %d",a,b);

getch();
}