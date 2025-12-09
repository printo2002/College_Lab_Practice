// 20. Program to find root of a quadratic equation.

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float a,b,c,discri,root1,root2;
   clrscr();

   printf("Enter  coefficents a,b and c: \n");
   scanf("%f %f %f",&a,&b,&c);
   discri =  (b * b) - (4 * a * c);

   if(discri >= 0)
   {
     root1 = ( -b + sqrt(discri)) / (2 * a);
     root2 = ( -b - sqrt(discri)) / (2 * a);

     printf("Roots are real and different: \n");
     printf("Root 1 = %.2f\n",root1);
     printf("Root 2 = %.2f\n",root2);

   }
   else{
     printf("No real roots");
   }


 getch();
}