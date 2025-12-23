// 31. Program to search an element in an array using linear search.

#include<stdio.h>
#include<conio.h>
void main() 
{ 
  int a[50], n, key, i, found = 0; 
  printf("Enter number of elements: "); 
  scanf("%d", &n); 
  printf("Enter %d elements:\n", n); 
  for (i = 0; i < n; i++)
  { 
    scanf("%d", &a[i]); 
   } 
  printf("Enter element to search: "); 
  scanf("%d", &key); 
  for (i = 0; i < n; i++)
  { 
   if (a[i] == key)
   { 
     printf("Element %d found at position %d", key, i + 1); 
     found = 1; 
     break; 
   } 
  } 
  if (found == 0) 
  printf("Element %d not found in the array", key); 
 getch(); 
}
