#include <stdio.h>
#include<stdlib.h>
#define SIZE 4
int main (void)
{
int ch,front=-1,rear=-1,count=0,item;
int arr[SIZE];
while(1){
printf("1.Check if the queue is empty\n");
printf("2.Display the contents of the queue\n");
printf("3.Push an element into the queue\n");
printf("4.Pop an element from the queue\n");
printf("5.Display the size of the queue\n");
printf("6.Display the first position\n");
printf("7.Display the rear position\n");
printf("8.Check if the queue is full\n");
printf("9.Exit\n");
printf("\n----Enter your choice:----\n");
scanf("%d",&ch);
switch(ch){
    case 1:
    
     if(front==-1 && rear==-1)
     {
        printf("The queue is empty\n");
        count=0;
     }
     else
     {
       printf("The queue is not empty\n");
     }
    
      break;
    case 2:
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",arr[i]);
        }

        break;
    case 3:
    printf("Enter the element you want to insert:\n");
    scanf("%d",&item);
           if(front==-1 && rear==-1)
           {
            front=0;
            rear=0;
            arr[rear]=item;
            count++;
           }
          else if(rear==SIZE-1)
          {
            printf("\nOVERFLOW!!\n");
            count=SIZE;
          }
          else
          {
            rear++;
            arr[rear]=item;
            count++;
          }
          break;
    case 4:
           if(front==-1 && rear==-1)
           {
            printf("\nUNDERFLOW!!\n");
            count=0;
           }
           else if(front==rear)
           {
            int value;
            value=arr[front];
            printf("The poppped element is : %d\n",value);
            front=-1;
            rear=-1;
            count--;
           }
           else
           {
            int val;
            val=arr[front];
            front++;
            printf("The popped element is : %d\n",val);
            count--;
           }
           break;
    case 5:
           printf("The number of elements is : %d\n",count);
          break;
    case 6:
           printf("The element in the first position is : %d\n",arr[front]);
           break;
    case 7:
           printf("The element at the rear position is: %d\n",arr[rear]);
           break;
   case 8:
           if(rear==SIZE-1)
           printf("The stack is full\n");
           else
           printf("The stack is not full\n");
           break;
    case 9:
           exit(0);
           break;
}
}
return 0;
}