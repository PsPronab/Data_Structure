#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;


void createList();
void traverseList();


int main()
{


    createList();

    printf("\nData in the list \n");
    traverseList();

    return 0;
}

void createList()
{
    struct node *newNode, *temp;
    int data, i;
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    head = (struct node *)malloc(sizeof(struct node));



    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {

        printf("Enter the data of node 1: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;
        temp = head;


        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);

                newNode->data = data;
                newNode->next = NULL;

                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
}

void traverseList()
{
    struct node *temp;


    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}
