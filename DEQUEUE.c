#include <stdio.h>
#include<stdlib.h>

int main (void)
{
int SIZE=8;
int arr[SIZE];
int Front=-1,Rear=-1;
int maxsize=SIZE-1;

int value,ch,count;
char pos,end;
while(1){
printf("\n1.Push an elememnt into the queue\n");
printf("\n2.Delete an element into the queue\n");
//printf("\n3.Print all the elements of the queue\n");
printf("\n4.Exit\n");
printf("Enter your choice :\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the value and the position where you want to insert :");
scanf("%d %c",&value,&pos);
if(pos=='f' || pos=='F' )
{
    if((Front+1==Rear)||(Front==maxsize && Rear==-1)||(Front==-1 && Rear==0))
    {
        printf("OVERFLOW!!");
    }
    else
    {
        Front++;
        arr[Front]==value;
    }
}
else
{
    if((Front+1==Rear)||(Front==maxsize && Rear==-1)||(Front==-1 && Rear==0))
    {
        printf("OVERFLOW!!");
    }
    else if (Rear==-1)
    {
    Rear==maxsize;
    arr[Rear]=value;
    }
    else
    {
        Rear--;
        arr[Rear]=value;
    }
}
break;
case 2:
if(Front==-1 && Rear==-1)
{
    printf("Underflow!!\n");
}
else{
printf("Enter the end from where you want to delete :\n");
scanf("%c",end);
int a;
if(end=='f' || end=='F')
{
    printf("The element deleted is :%d",arr[Front]);
    Front--;   
}
else
{
    if(Rear==maxsize)
    {
        printf("The element deleted is :%d",arr[Rear]);
        Rear=-1;
    }
    else
    {
        printf("The element deleted is :%d",arr[Rear]);
        Rear++;
    }
}
}
break;
//case 3:
       //for(int i=0;i<=maxsize;i++)
       //{
       // printf("%d ",arr[i]);
       //}
       //break;
case 4:
       exit(0);
       break;
}
}
return 0;
}
