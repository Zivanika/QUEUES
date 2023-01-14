#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
void insertatFront(int value,struct Node **Front,struct Node **Rear)
{
    
    if(*Front==NULL)
    {
        struct Node *new=(struct Node*)malloc(sizeof(struct Node));
        new->data=value;
        new->next=NULL;
        new->prev=NULL;
        *Front=*Rear=new;
    }
    else
    {
     struct Node *new;
     new=(struct Node*)malloc(sizeof(struct Node));
     new->data=value;
     new->next=*Front;
     (*Front)->prev=new;
     new->prev=NULL;
     *Front=new;
    }
}
void insertatRear(int value,struct Node **Front,struct Node **Rear)
{
   
    if(Rear==NULL)
    {
      struct Node *new=(struct Node*)malloc(sizeof(struct Node));
      new->data=value;
      new->next=NULL;
      new->prev=NULL;
      *Rear=*Front=new;
    }
    else{
        struct Node *new=(struct Node*)malloc(sizeof(struct Node));
        (*Rear)->next=new;
        new->prev=*Rear;
        new->data=value;
        *Rear=new;
    }
}
void delatFront(struct Node **Front,struct Node **Rear)
{
    int a;
    if(*Front== NULL && *Rear==NULL)
    {
        printf("\nUNDERFLOW!!\n");
    }
    else if(*Front==*Rear)
    {
        struct Node *ptr=*Front;
      a=(*Front)->data;
      *Front=NULL;
      *Rear=NULL;
      free(ptr);
      printf("The deleted element is : %d\n",a);
    }
    else
    {
        //struct Node *ptr=*Front;
        struct Node *temp=*Front;
        a=temp->data;
        *Front=temp->next;
        free(temp);
        printf("The deleted element is :%d\n",a);


    }
}
    void delatRear(struct Node **Front,struct Node **Rear){
    int a;
    if(*Front== NULL && *Rear==NULL)
    {
        printf("\nUNDERFLOW!!\n");
    }
    else if(*Front==*Rear)
    {
      struct Node *ptr=*Front;
      a=ptr->data;
      *Front=NULL;
      *Rear=NULL;
      printf("The deleted element is : %d\n",a);
      free(ptr);
    }
    else
    {
        struct Node *temp;
        temp=*Rear;
        a=(*Rear)->data;
        *Rear=temp->prev;
        printf("The deleted element is: %d\n",a);
    }
    }
void traversal(struct Node *Front,struct Node *Rear)
{
    struct Node *ptr;
    ptr=Front;
    while(ptr!=Rear)
    {
      printf("%d ",ptr->data);
      ptr=ptr->next;
    }
    printf("%d",ptr->data);
}
int main (void)
{
struct Node *Front,*Rear;
Front=NULL;
Rear=NULL;
int ch,value;
while(1){
printf("1.Check if the queue is empty\n");
printf("2.Display the contents of the queue\n");
printf("3.Insert an element into the queue at the front\n");
printf("4.Insert an element into the queue at the rear end\n");
printf("5.Delete an element from the queue at the rear end\n");
printf("6.Delete an element from the queue at the front end\n");
printf("7.Exit\n");
printf("\n----Enter your choice:----\n");
scanf("%d",&ch);
switch(ch){
    case 1:
    if(Front==NULL && Rear==NULL)
    printf("The queue is empty!\n");
    break;
    case 2:
    printf("\nThe contents of the queue is :\n");
    traversal(Front,Rear);
    break;
    case 3:
    printf("\nEnter the value that you want to insert at the front:\n");
    scanf("%d",&value);
    insertatFront(value,&Front,&Rear);
    break;
    case 4:
     printf("\nEnter the value that you want to insert at the end:\n");
     scanf("%d",&value);
     insertatRear(value,&Front,&Rear);
     break;
    case 5:
      delatRear(&Front,&Rear);
      break;
    case 6:
       delatFront(&Front,&Rear);
       break;
 
}
}
return 0;
}