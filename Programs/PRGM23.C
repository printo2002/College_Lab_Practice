// 23. An electric power distribution company charges its domestic
// consumer as follows:


// Consummption Units       Rate of Charge

//	0 - 200		     Rs: 0.50 per unit
//	201 - 400	     Rs: 100 plus Rs: 0.65 per unit excess of 200
//	401 - 600	     Rs: 230 plus Rs: 0.80 per unit excess of 400
// 	601 and above	     Rs: 390 plus Rs: 1.00 per unit excess of 600

// Read the customer number and power consumed and
// prints the amount to be paid by the customer.

#include<stdio.h>
#include<conio.h>
void main()
{
 int cust_no,units;
 float amount;
 clrscr();
 printf("Enter the customer id: \t");
 scanf("%d",&cust_no);
 printf("Enter the Power Consumed: \t");
 scanf("%d",&units);

 if(units > 0 && units <= 200)
 {
  	amount = units * 0.50;       

 }
 else if(units >= 201 && units <= 400)
 {
	
	amount = (units * 0.65) + 100;
 }
 else if(units >=401 && units <= 600)
 {
   	amount = (units * 0.80) + 230;
 }
 else if(units >=601)
 {
	amount = (units * 1.00) + 390;
 }
 else
 {
  printf("Invalid Input ");
 }

printf("\n");
printf("====== Your Bill  ======");
printf("\n");
printf("\nCustomer ID: %d",cust_no);
printf("\nPower Consumed By Customer: %d",units);
printf("\nTotal Amount to Pay is %f",amount);






  getch();
}