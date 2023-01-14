#include <stdio.h>
#include<stdlib.h>
struct Node{
    char data;
    int priority;
    struct Node *next;
};
void grade_priority(struct Node *ptr)
{
    if(ptr->data=='O')
    ptr->priority=1;
    if(ptr->data=='E')
    ptr->priority=2;
    if(ptr->data=='A')
    ptr->priority=3;
    if(ptr->data=='B')
    ptr->priority=4;
    if(ptr->data=='C')
    ptr->priority=5;
    if(ptr->data=='D')
    ptr->priority=6;

}
struct Node *grade(struct Node *Front)
{
    struct Node *ptr=Front;
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the grade: ");
    scanf("%c",&new->data);
    grade_priority(new);
    if(Front==NULL)
    {
     Front=new;
    }
    else if(ptr->priority>new->priority)
    {
      new->next=Front;
      Front=new;
    }
    else
    {
     while(ptr->next!=NULL && ptr->next->priority<=new->priority)
     {
        ptr=ptr->next;
     }
     new->next=ptr->next;
     ptr->next=new;
    }
    return Front;
}
void traversal(struct Node *Front)
{
    struct Node *ptr=Front;
    while(ptr!=NULL)
    {
        printf("%c ",ptr->data);
        ptr=ptr->next;
    }
}
int main (void)
{
struct Node *Front=NULL;
Front=grade(Front);
Front=grade(Front);
Front=grade(Front);
Front=grade(Front);
traversal(Front);
return 0;
}