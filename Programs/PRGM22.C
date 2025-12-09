// 22. Program to read marks of a student and find their grade according to the mark using else…if ladder.

#include<stdio.h>
#include<conio.h>
void main()
{
 int marks;
 clrscr();
 printf("Enter the marks of the student:\n");
 scanf("%d",&marks);

 if(marks <= 100)
{
  if(marks >= 90 && marks <= 100)
  {
   printf("Student Received : A Grade");
  }
  else if(marks >= 80 &&  marks < 90)
  {
   printf("Student Received : B Grade");
  }
  else if(marks >= 70 &&  marks < 80)
  {
   printf("Student Received : C Grade");
  }
  else if(marks >= 60 &&  marks < 70)
  {
   printf("Student Received : D Grade");
  }
  else if(marks >= 35 &&  marks < 60)
  {
   printf("Student Received : E Grade");
  }
  else
  {
   printf("Student Failed in the examination \n");
  }
}
else{
 printf("Marks is outof 100.\n Please enter marks within 100");
}

 getch();
}