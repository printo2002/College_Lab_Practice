// 32. Program to search an element in an array using binary search.

#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],n,i,key;
  int low = 0,high,mid,found = 0;
  clrscr();
  printf("Enter number of elements: ");
  scanf("%d",&n);

  printf("Enter %d elements in ascending order: \n",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("Enter element to search: \t");
  scanf("%d",&key);

  high = n -1;

  while(low <= high)
  {
    mid = (low + high)/2;

    if(a[mid] == key)
    {
      found = 1;
      break;
    }
    else if(key < a[mid])
    {
      high = mid - 1;
    }
    else {
     low = mid + 1;
     }
    }

    if(found == 1)
    {
      printf("Element found at position %d",mid + 1);
    }
    else
    {
      printf("Element not found");
    }

 getch();
}