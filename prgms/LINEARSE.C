#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[50],key,n,flag=0;
 clrscr();
 printf("----- Linear Search -----\n");
 printf("Enter array size:\t");
 scanf("%d",&n);
 printf("Enter the %d elements:\n",n);
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("Enter the element to search:\t");
 scanf("%d",&key);

 for(i=0;i<n;i++)
 {
    if(key == a[i])
    {
      flag =1;
      break;
    }

 }

 if(flag == 1)
 {
  printf("%d found at position %d",key,i+1);
 }
 else{
  printf("Element does not found..");
 }

 getch();
}