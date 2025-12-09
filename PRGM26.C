// 26. Program to display alphabet A to Z using loops.

#include<stdio.h>
#include<conio.h>
void main()
{
 char i;
 clrscr();
 printf("===== Alphabet Order From A to Z  =====\n");
 for(i='A';i<='Z';i++)
 {
   printf("%c\t",i);
 }
 getch();
}