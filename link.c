#include<stdio.h>
struct node
{

    int data;
    struct node *link;

}*head,*current,*newnode;
/*void fadd();
void ladd();
void any();
void disply();
int main()
{
    int a,c=1;
    head=(struct node*)malloc(sizeof(struct node));

    head->data=NULL;
    head->link=NULL;


    while(c==1)
    {
        printf("Enter Your Chouse\n");
        printf("1.fast add\n");
        printf("2.last add\n");
        printf("3.add any\n");
        printf("4.disply\n");
        printf("choise ");
        scanf("%d",&a);
        switch(a)
        {
        /* case 1:
             fadd();
             break;
         case 2:
             ladd();
         case 3:
             any();*/
        case 4:
            disply();
            break;

        }
        printf("do u continue??(1/0)");
        scanf("%d",&c);
    }

}

void disply()
{
    if(head!=NULL)
    {
        current=head;
        while(current->link!=NULL)
        {
            current=current->link;
            printf("%d",current->data);
        }
    }
    else
    {
        printf("emty");
    }

}
