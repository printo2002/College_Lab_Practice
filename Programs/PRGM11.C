// 11. Program to find total and avrage of 5 marks of student.

#include<stdio.h>
#include<conio.h>
void main()
{
 int sum;
 char name[20];
 float avg;
 int mark1,mark2,mark3,mark4,mark5;
 clrscr();
 printf("=== ENTER STUDENT'S MARKS ===\n\n");
 printf("Enter Mark of Subject1 (outof 100):\n");
 scanf("%d",&mark1);
 printf("Enter Mark of Subject2 (outof 100): \n");
 scanf("%d",&mark2);
 printf("Enter Mark of Subject3 (outof 100): \n");
 scanf("%d",&mark3);
 printf("Enter Mark of Subject4 (outof 100): \n");
 scanf("%d",&mark4);
 printf("Enter Mark of Subject5 (outof 100): \n");
 scanf("%d",&mark5);
 sum  = mark1+mark2+mark3+mark4+mark5;
 avg = (mark1+mark2+mark3+mark4+mark5)/5;
 printf("\n");
 printf("===== STUDENT'S RESULT =====\n");
 printf("Subject1:\t %d\n",mark1);
 printf("Subject2:\t %d\n",mark2);
 printf("Subject3:\t %d\n",mark3);
 printf("Subject4:\t %d\n",mark4);
 printf("Subject5:\t %d\n",mark5);
 printf("\n");
 printf("\n Total Marks (Outof 500) : %d",sum);
 printf("\n Average : %f",avg);
getch();
}