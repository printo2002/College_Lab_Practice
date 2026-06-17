#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
  int value;
  if(front == -1 && rear == -1)
  {
    front = 0;
    rear = 0;
    printf("Enter the element:\t");
    scanf("%d",&value);
    queue[rear] = value;
  }
  else if((rear+1)%MAX ==front)
  {
     printf("Queue Overflow\n");
  }
  else
  {
     rear = (rear +1) % MAX;
     printf("Enter the element to insert:\t");
     scanf("%d",&value);
     queue[rear] = value;
  }

}

void dequeue()
{
   if(front == -1 && rear == -1)
   {
     printf("Queue Underflow \n");
   }
   else if( front == rear)
   {
     printf("Deleted element is: %d\n",queue[front]);
     front = -1;
     rear = -1;
   }
   else
   {
      printf("Deleted element is: %d\n",queue[front]);
      front = (front + 1 ) % MAX;
   }
}


void display()
{
  int i= front;
  if(front == -1 && rear == -1)
  {
     printf("Queue is empty\n");
  }
  else
  {
    printf("Elements of Circular Queue:\n");
    printf("%d ",queue[i]);
    while(i != rear)
    {
      i = (i+1)% MAX;
      printf("%d ",queue[i]);
    }
  }
}

void main()
{
 int choice;
 clrscr();
 printf("---- CIRCULAR QUEUE ----\n");
 while(1)
 {
   printf("\n1. ENQUEUE \n 2.DEQUEUE \n 3.DISPLAY ALL\n 4. EXIT \n");
   printf("Enter Your Choice: \n");
   scanf("%d",&choice);
    switch(choice)
    {
      case 1: enqueue();
	      break;
      case 2: dequeue();
	      break;
      case 3: display();
	      break;
      case 4: exit(0);
      default: printf("INVAALID INPUT........\n");
    }
 }
 getch();
}