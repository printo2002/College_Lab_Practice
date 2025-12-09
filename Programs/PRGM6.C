// 6. Program to calculate the area and perimeter of a circle.

#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
  float r,perimeter,area;
  clrscr();
  printf("Enter the radius of the Circle:\n");
  scanf("%f",&r);
  area = PI * r * r;
  perimeter =  2 * PI *r;
  printf("Area of the Circle is: %f\n",area);
  printf("Perimeter of Circle is: %f\n",perimeter);
  
getch();
}