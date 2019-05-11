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


void delete_strt()
{
    struct node *current;
    current=head;
    head=head->next;
    free(current);
}

int main()
{
    create();
    delete_strt();
    traverse();

    return 0;
}



