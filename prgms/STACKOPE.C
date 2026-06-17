#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int top = -1;
int stack[MAX];

void push(){
 int value;
 if(top == MAX -1)
 {
   printf("Stack Overflow \n");
 }
 else{
  printf("Enter element to be inserted: \n");
  scanf("%d",&value);
  top++;
  stack[top]= value;
 }
}

void pop(){
 if(top == -1)
 {
   printf("Stack Underflow \n");
 }
 else{
   printf("Element deleted: %d\n",stack[top]);
   top--;
 }
}

void peek(){
 if(top == -1)
 {
  printf("Stack is empty\n");
 }
 else{
  printf("Top of stack: %d\n",stack[top]);
 }
}

void display(){
 int i;
 if(top == -1)
 {
   printf("Stack is empty\n");
 }
 else{
   printf("Stack Elements are:\n");
   for(i=top;i>=0;i--)
   {
	printf("%d\t",stack[i]);
   }
 }
}

void main()
{
  int choice;
  clrscr();
  while(1)
  {
    printf("\n---- Stack Operations ----\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. PEEK\n");
    printf("4. DISPLAY ALL\n");
    printf("5. EXIT\n");
    printf("--------------\n");
    printf("Enter choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1: 	push();
		break;

      case 2:	pop();
		break;

      case 3:   peek();
		break;

      case 4:   display();
		break;

      case 5:   exit(0);

      default: printf("!! Invalid input !!");
    }
  }

 getch();
}