// 35. Program to read a string and check whether it is palindrome or not.

#include<stdio.h>
#include<string.h>
void main() 
{ 
  char str[100]; 
  int i, len, flag = 0;
  clrscr();
  printf("Enter a string: "); 
  scanf("%s", str); 
   
  len = strlen(str); 

  for (i = 0; i < len / 2; i++) 
  { 
    if (str[i] != str[len - i - 1]) 
    { 
      flag = 1; 
      break; 
    } 
  } 

 if (flag == 0) 
 printf("The string is a Palindrome"); 
 else 
 printf("The string is NOT a Palindrome"); 

 getch(); 
}