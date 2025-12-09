// 7. Program to accept Temperature in Fahrenheit and
//    convert it to degree celcius.

#include<stdio.h>
#include<conio.h>
void main()
{
 float f,c;
 clrscr();
 printf("Enter Temperature in Fahrenheit:\n");
 scanf("%f",&f);

 c = ((f - 32) * 5.0) / 9.0;
 printf("Temperature in Celcius: %f",c);
 
getch();
}
