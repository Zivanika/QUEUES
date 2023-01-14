#include <stdio.h>
#include<stdlib.h>
#define size 8
int front=-1;
int rear=-1;
int arr[size];
int count=0;
void enque(int value)
{
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        arr[0]=value;
        count++;
    }
    else if(front==rear+1 ||rear==size-1)
    {
        printf("OVERFLOW!!\n");
    }
    else
    {
        rear++;
        arr[rear%size]=value;
    }
}
void deque()
{
    int a;
    if(front==-1 && rear==-1)
       printf("UNDERFLOW!!\n");
    else if(front==rear)
    {
      a=arr[front%size];
      front=-1;
      rear=-1;
      printf("The popped element is: %d\n",a);
    }
    else
    {
        a=arr[front%size];
        front++;
        printf("The popped element is: %d\n",a);
    }
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main (void)
{
enque(10);
enque(20);
enque(30);
enque(40);
display();
deque();
display();
return 0;
}