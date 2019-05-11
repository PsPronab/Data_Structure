#include<stdio.h>
#include<stdlib.h>


struct NODE
{

    int data;
    struct NODE *next;

}*head,*current,*new_node,*prev;

typedef struct NODE node;

void insert_first();
void insert_last();
void insert_any();
void delete_any();
void display();

int main()
{
    int choice;
    int cons=1;

    head = (node*)malloc(sizeof(node));

    head->data=NULL;
    head->next=NULL;

    while(cons==1)
    {
        printf("Press 1. Insert First \n");
        printf("Press 2. Insert last \n");
        printf("Press 3. Insert any \n");
        printf("Press 4. Delete any \n");
        printf("Press 5. Display \n");

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            insert_first();
            break;

        case 2:
            insert_last();
            break;

        case 3:
            insert_any();
            break;

        case 4:
            delete_any();
            break;

        case 5:
            display();
            break;
        }
        printf("\n\nDo you continue your program(1/0),press: \n");
        scanf("%d",&cons);
    }
    return 0;
}

void insert_first()
{
    int data_value;
    printf("Enter the data: \n");
    scanf("%d",&data_value);

    new_node=(node*)malloc(sizeof(node));

    new_node->data=data_value;
    new_node->next=head->next;
    head->next=new_node;

}

void insert_last()
{
    int data_value;
    printf("Enter the data: \n");
    scanf("%d",&data_value);

    new_node=(node*)malloc(sizeof(node));

    current=head;
    while(current->next != NULL)
    {
        current = current->next;
    }

    new_node->data=data_value;
    new_node->next=current->next;
    current->next=new_node;

}


void insert_any()
{
    int data_value,key;
    printf("Enter the data: ");
    scanf("%d",&data_value);
    printf("\nEnter the data which after the data: ");
    scanf("%d",&key);

    new_node=(node*)malloc(sizeof(node));

    current=head;
    while(current->next != NULL && current->data != key)
    {
        current = current->next;
    }
    if(current->data == key)
    {
        new_node->data=data_value;
        new_node->next=current->next;
        current->next=new_node;
    }
    else
        printf("Data Not Found\n");

}


void delete_any()
{
    node *prev;
    int data_value;
    printf("Enter your delete data: ");
    scanf("%d",&data_value);
    current=head;
    while(current->data !=data_value ) {
        prev=current;
        current=current->next;
    }
    prev->next=current->next;
    free(current);
    printf("su.. remove");
}

void display()
{
    printf("Content linked list are: ");

    current=head;
    while(current->next != NULL) {
        current=current->next;
        printf("%d  ",current->data);
    }
}
