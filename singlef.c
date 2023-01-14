#include <stdio.h>
#include<stdlib.h>
#define size 8
int front=-1;
int rear=-1;
int count=0;
int que[size];
void push(int value)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        que[rear]=value;
        count++;
    }
    else if(rear==size)
    {
      printf("\nOVERFLOW!!\n");
    }
    else
    {
        rear++;
        que[rear]=value;
        count++;
    }
}
void pop()
{
    int a;
    if(front==rear)
    {
        a=que[front];
        printf("\nThe popped element is: %d",a);
        front=-1;
        rear=-1;
        count--;
    }
    else if(front==-1)
        printf("\nUNDERFLOW!!\n");
    else
    {
        a=que[front];
        front++;
        count--;
        printf("\nThe popped element is: %d",a);
    }
}
void display()
{
    printf("\n");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",que[i]);
    }
}
int main (void)
{
int ch,val;
while(1)
{
printf("\n----MENU----\n");
printf("\n1.Push an element into the queue\n");
printf("\n2.Pop an element from the queue\n");
printf("\n3.Display the contents of the queue\n");
printf("\n4.Display the front element of the queue\n");
printf("\n5.Display the rear element of the queue\n");
printf("\n6.Check if the queue is full\n");
printf("\n7.Check if the queue is empty\n");
printf("\n8.Exit\n");
printf("\nEnter you choice\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    printf("Enter the element you want to push\n");
    scanf("%d",&val);
    push(val);
    break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
    case 4:
    printf("%d\n",que[front]);
    break;
    case 5:
    printf("%d\n",que[rear]);
    break;
    case 6:
    if(rear==size-1)
    printf("THE QUEUE IS FULL\n");
    else
    printf("THERER is STILL SOME SPACE LEFT\n");
    break;
    case 7:
    if(front==-1 && rear==-1)
    printf("THE QUEUE IS EMPTY\n");
    else
    printf("THE QUEUE IS NOT EMPTY\n");
    break;
    case 8:
    exit(0);
}
}
return 0;
}