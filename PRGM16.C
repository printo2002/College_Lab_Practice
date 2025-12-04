
// 16. Program to check whether a number is palindrome or not. 

#include<stdio.h>
#include<conio.h>
void main()
{
 int num,rev=0,rem,temp;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&num);

 temp = num;

 while(num > 0)
 {
  rem = num % 10;
  rev = rev * 10 + rem;
  num = num /10;
 }
 if(temp == rev)
 printf("palindrome",temp);
 else
 printf(" not palindrome \n",temp);

 getch();
}