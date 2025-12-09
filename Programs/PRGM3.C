// 3. Program to find simple interest.


#include<stdio.h>
#include<conio.h>
void main()
{
  float P,T,SI,R;
  clrscr();
  printf("Enter Your initail Amount:\n");
  scanf("%f",&P);
  printf("Enter Rate of interest:\n");
  scanf("%f",&R);
  printf("Enter Time (in years):\n");
  scanf("%f",&T);

  SI =(P*R*T)/100;

  printf("Your interest: %f",SI);

getch();
}