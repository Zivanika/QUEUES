#include <stdio.h>
#define size 4
int front==-1;
int rear==-1;
int arr[size];
void insertatfront(int arr[],int value)
{
    if((front==rear-1)) || (rear==-1 && front==size-1) || (rear==0 && front==-1)
    {
        printf("OVERFLOW!!\n");
    }
    else
    {
        front++;
        arr[front]=value;
    }
}
void insertAtRear(int arr[],int value)
{
    if((front==rear-1)) || (rear==-1 && front==size-1) || (rear==0 && front==-1)
    {
        printf("OVERFLOW!!\n");
    }
    else
    {
        
    }
}
int main (void)
{
return 0;
}