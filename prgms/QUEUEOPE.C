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
  if(rear == MAX - 1)
  {
    printf("Queue overflow\n");
  }
  else
  {
    if(front == -1)
	front = 0;
    printf("Insert item into Queue\n");
    scanf("%d",&value);
    rear++;
    queue[rear]= value;
  }

}

void dequeue()
{
 if(front == -1 || front > rear)
 {
   printf("Queue Underflow \n");
 }
 else
 {
   printf("Element deleted: %d\n",queue[front]);
   front++;
 }
}

void display()
{
 int i;
 if(front == -1 || front > rear)
 {
   printf("Queue is empty");
 }
 else
 {
   printf("Queue Elements:\n");
   for(i=front;i<rear;i++)
   {
    printf("%d\t",queue[i]);
   }
   printf("\n");
 }
}

void main()
{
 int choice;
 clrscr();
 while(1)
 {
   printf("---- Queue Operation ----\n 1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
   printf("Enter your choice:\n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:  enqueue();
		break;
     case 2:  dequeue();
		break;
     case 3:  display();
		break;
     case 4:  exit(0);
		break;
     default:   printf("!! Invalid Input !!");
   }
 }



 getch();
}