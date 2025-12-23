// 36. Program to find the length of a string without using
//     the string handling function strlen().

#include<stdio.h>
#include<conio.h>
void main()
{
  char str[100];
  int length = 0;
  clrscr();
  printf("Enter a string: "); 
  scanf("%s", str);  

  while (str[length] != '\0') 
  { 
    length++; 
  } 
  printf("Length of the string = %d", length); 

getch(); 
}