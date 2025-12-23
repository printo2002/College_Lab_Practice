// 34. Program to perform various string handling functions.

#include <stdio.h> 
#include <string.h>
void main() 
{ 
  char str1[50], str2[50], str3[50]; 
  int cmp; 
  printf("Enter first string: "); 
  scanf("%s", str1); 
  printf("Enter second string: "); 
  scanf("%s", str2); 

  // 1. Length of string 
  printf("Length of first string: %lu\n", strlen(str1)); 

  // 2. Copy string 
  strcpy(str3, str1); 
  printf("Copied string: %s\n", str3); 

  // 3. Concatenate strings 
  strcat(str1, str2); 
  printf("Concatenated string: %s\n", str1); 

  // 4. Compare strings 
  cmp = strcmp(str2, str3); 
  if (cmp == 0) 
  printf("Second string and copied string are equal\n"); 
  else 
  printf("Second string and copied string are not equal\n"); 

  // 5. Reverse string (Turbo C) 
  strrev(str2); 
  printf("Reversed second string: %s\n", str2); 

getch(); 
} 
