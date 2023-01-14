#include <stdio.h>
#define size 8
int deque[size];
int front=-1;
int rear=-1;
void insert_at_Front(int value)
{
    if((front==rear+1) ||(rear==-1 && front==size-1) ||(front==-1 && rear==0))
    {
          printf("OVERFLOW!!\n");
    }
    else
    {
        front++;
        deque[front]=value;
    }
}
void insert_at_rear(int value)
{
    if((front==rear+1) ||(rear==-1 && front==size-1) ||(front==-1 && rear==0))
    {
          printf("OVERFLOW!!\n");
    }
    else if(rear==-1)
    {
        rear=size-1;
        deque[rear]=value;
    }
    else
    {
        rear--;
        deque[rear]=value;
    }
}
void delete_at_front()
{
int a;
if(front==-1 && rear==-1)
{
     printf("UNDERFLOW!!\n");
}
else{
    a=deque[front];
    deque[front]=0;
    front++;
    printf("The deleted element is: %d\n",a);
}
}
void delete_at_rear()
{
    int a;
if(front==-1 && rear==-1)
{
    printf("UNDERFLOW!!\n");
}
else if(rear==size-1)
{
a=deque[rear];
deque[rear]=0;
rear=-1; 
}
    
}
int main (void)
{
return 0;
}