#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void ENQUEUE(struct Node **Front,struct Node **Rear,int value)
{
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    new->data=value;
    new->next=NULL;
    if(*Front==NULL && *Rear==NULL)
    {
     *Front=new;
     *Rear=new;  
    }
    else if(*Front==*Rear)
    {
        (*Front)->next=new;
        (*Rear)=new;
    }
    else{
        (*Rear)->next=new;
        (*Rear)=new;
    }
}
void DEQUEUE(struct Node **Front,struct Node **Rear)
{
    struct Node *temp;
    if(*Front== NULL && *Rear==NULL)
    {
        printf("UNDERFLOW!!\n");
    }
    else if (*Front==*Rear)
    {
        temp=(*Front);
        *Front=NULL;
        *Rear=NULL;
        printf("The popped element is: %d",temp->data);
    }
    else
    {
        temp=(*Front);
        *Front=temp->next;
        printf("The popped element is: %d",temp->data);
        free(temp);
    }
}
void traversal(struct Node *Front,struct Node *Rear)
{
    struct Node *ptr=Front;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main (void)
{
struct Node *Front,*Rear;
Front=NULL;
Rear=NULL;
ENQUEUE(&Front,&Rear,10);
ENQUEUE(&Front,&Rear,20);
traversal(Front,Rear);
DEQUEUE(&Front,&Rear);
traversal(Front,Rear);
return 0;
}