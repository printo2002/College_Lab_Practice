#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100];
 int i,j,n,key;
 clrscr();
 printf("---- Insertion Sort ----\n");
 printf("Enter no of elements: \t");
 scanf("%d",&n);
 printf("Enter elements:\n");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }

 printf("Before Sorting:\n");
 for(i=0;i<n;i++)
 {
   printf("%d\t",a[i]);
 }
 printf("\n");

 //
 for(i=1;i<n;i++)
 {
   key= a[i];
   j= i-1;

   while(j>=0 && a[j] > key)
   {
     a[j+1] = a[j];
     j= j - 1;
   }
   a[j+1] = key;
 }

 printf("After Sorting:\n");
 for(i=0;i<n;i++)
 {
   printf("%d\t",a[i]);
 }

  getch();
}