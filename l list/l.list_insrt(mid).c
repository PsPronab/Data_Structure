#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;


void create()
{
    struct node *current,*newnode;
    int i,data,n;
    printf("Enter no. of element\n");
    scanf("%d",&n);
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Enter data in node 1:");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        current=head;
        for(i=2;i<=n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            if(newnode==NULL)
            {
                printf("Unable to allocate memory\n");
                break;
            }
            else
            {
                printf("Enter data in node %d:",i);
                scanf("%d",&data);
                newnode->data=data;
                newnode->next=NULL;
                current->next=newnode;
                current=current->next;
            }
        }
    }
}


void traverse()
{
    struct node *current;
    current=head;
    while(current!=NULL)
    {
        printf("Data is %d\n",current->data);
        current=current->next;
    }
}


void insrt_mid()
{
    struct node *current,*newnode,*prev;
    int count=1,data,pos;
    printf("Enter position:");
    scanf("%d",&pos);
    printf("Enter new data:");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    current=head;
    while(current->next!=NULL&&count<pos)
    {
        prev=current;
        current=current->next;
        count++;
    }
    newnode->data=data;
    prev->next=newnode;
    newnode->next=current;
}


int main()
{
    create();
    insrt_mid();
    traverse();

    return 0;
}




