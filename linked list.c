#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int roll;
    struct Node *next;
};

typedef struct Node node;

node *head = 0;

void append(int roll)
{
    if(head == 0)
    {
        head = (node *) malloc(sizeof (node));
        head->roll = roll;
        head->next = 0;
    }
    else
    {
        node *temp = (node *) malloc(sizeof (node));
        temp = head;

        while(temp->next != 0)
        {
            temp = temp->next;
        }
        node *new_node = (node *) malloc(sizeof (node));
        new_node->roll = roll;
        new_node->next = 0;

        temp->next = new_node;
    }
}

void display()
{
    node *temp = (node *) malloc(sizeof (node));
    temp = head;

    while(temp->next != 0)
    {
        printf("Roll : %d\n", temp->roll);
        temp = temp->next;
    }
    printf("Roll : %d\n", temp->roll);
}

int main()
{
    int i, n;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        append(n);
    }
    display();

    return 0;
}
