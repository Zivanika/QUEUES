#include <stdio.h> 
#include <stdlib.h>
struct Node
{
    int INFO;
    struct Node *Next;
};
void ENQUEUE(struct Node **Front, struct Node **Rear, int item)
{
    struct Node *new, *link;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->INFO = item;
    new->Next = NULL;
    if (*Front == NULL && *Rear == NULL)
    {
        *Front = new;
        *Rear = new;
    }
    else
    {
        link = *Rear;
        link->Next = new;
        *Rear = new;
    }
}
void DEQUEUE(struct Node **Front, struct Node **Rear)
{
    struct Node *link;
    struct Node *temp;

    if (*Front == NULL && *Rear == NULL)
    {
        printf("UNDERFLOW!!");
    }
    else if (*Front == *Rear)
    {
        temp = *Front;
        *Front = NULL;
        *Rear = NULL;
        printf("The popped element is : %d\n", temp->INFO);
        free(temp);
    }
    else
    {
        link = *Front;
        temp = *Front;
        link = link->Next;
        printf("The popped element is : %d\n", temp->INFO);
        free(temp);
        *Front = link;
    }
}
void count(struct Node *Front, struct Node *Rear)
{
    if(Front==NULL && Rear==NULL)
    {
        printf("\nThe number of elements in the queue is 0\n");
    }
    else if(Front==Rear)
    {
        printf("\nThe numebr of elements in the queue is 1\n");
    }
    else{
    int count=1;
    struct Node *ptr;
    ptr = Front;
    while (ptr != Rear)
    {
        ptr = ptr->Next;
        count++;
    }
   printf("The number of elements in the queue is : %d\n",count);
    }
}

void traversal(struct Node *Front, struct Node *Rear)
{
    struct Node *ptr;
    ptr = Front;
    while (ptr != Rear)
    {
        printf("%d ", ptr->INFO);
        ptr = ptr->Next;
    }
    printf("%d", ptr->INFO);
}
void PEEK(struct Node *Front)
{
    printf("%d\n", Front->INFO);
}
int main(void)
{
    struct Node *Front, *Rear;
    int n,ch;
    Front = NULL;
    Rear = NULL;
    ENQUEUE(&Front, &Rear, 1); 
    ENQUEUE(&Front, &Rear, 2);
    ENQUEUE(&Front, &Rear, 3);
    ENQUEUE(&Front, &Rear, 4);
    printf("The original queue is :\n");
    traversal(Front, Rear);
    while(1){
printf("1.Check if the queue is empty\n");
printf("2.Display the contents of the queue\n");
printf("3.Push an element into the queue\n");
printf("4.Pop an element from the queue\n");
printf("5.Display the size of the queue\n");
printf("6.Display the first position\n");
printf("7.Display the rear position\n");
printf("8.Exit\n");
printf("\n----Enter your choice:----\n");
scanf("%d",&ch);
switch(ch){
    case 1:
         if(Front==NULL && Rear==NULL)
         {
            printf("\nThe queue is empty\n");
         }
    case 2:
        printf("The required queue is:\n");
          traversal(Front,Rear);
    case 3:
          printf("Enter the element you want to ENQUEUE\n");
          scanf("%d",&n);
          ENQUEUE(&Front, &Rear, n);
    case 4:
          DEQUEUE(&Front,&Rear);
    case 5:
          count(Front,Rear);
    case 6:
          PEEK(Front);
    case 7:
           printf("%d\n",Rear->INFO);
    case 8:
          exit(0);
}
    }  
    return 0;
}