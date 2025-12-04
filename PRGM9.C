// 9. Program to implement arithematic operation using switch.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int choice;
 int a,b,sum,product,subtract;
 float div,mod;
 clrscr();
 while(1)
 {
  printf("\n");
  printf("Choose An Operator \n\n");
  printf("1. Addition ( + )\n");
  printf("2. Substraction ( - )\n");
  printf("3. Multiply ( * )\n");
  printf("4. Division ( / )\n");
  printf("5. Modulus ( % )\n");
  printf("6. EXIT \n");

  printf("Enter a choice: \n");
  scanf("%d",&choice);
  if (choice == 6){
   exit(0);
  }
  printf("Enter 1st number\n");
  scanf("%d",&a);
  printf("Enter 2nd number\n");
  scanf("%d",&b);

  switch(choice){
   case 1:
	 printf("Addition\n");
	 sum = a + b;
	 printf("%d + %d = %d",a,b,sum);
	 break;
   case 2:
	 printf("Substraction\n");
	 subtract = a - b;
	 printf("%d - %d = %d",a,b,subtract);
	 break;
   case 3:
	 printf("Multiply\n");
	 product = a * b;
	 printf("%d * %d = %d",a,b,product);
	 break;
   case 4:
	 printf("Division\n");
	 div = a / b;
	 printf("%d  / %d = %f",a,b,div);
	 break;
   case 5:
	 printf("Modulus\n");
	 mod = a % b;
	 printf("%d %% %d = %f",a,b,mod);
	 break;
   default:
	 printf("Invalid Input");

  }
}

getch();
}