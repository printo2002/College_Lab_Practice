#include<stdio.h>
#include<conio.h>
void main()
{
  int a[50],n,i,key,flag=0,mid,high,low=0;
  clrscr();
  printf("----- Binary Search -----\n");
  printf("Enter the size of array:\n");
  scanf("%d",&n);
  printf("Enter the elements in ascending order:\n");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched:\t");
  scanf("%d",&key);
  high = n - 1;
  while(low <= high)
  {
    mid = (low + high)/2;
    if(a[mid] == key)
    {
      flag =1;
      break;
    }
    else if(key < a[mid])
    {
	  high = mid - 1;
    }
    else{
	 low = mid + 1;
    }
  }
  if(flag == 1)
  {
    printf("%d found at postion %d",key,mid+1);
  }
  else{
    printf("Element not found..");
  }
 getch();
}