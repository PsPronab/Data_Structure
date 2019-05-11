#include<stdio.h>
#include<stdlib.h>


struct Data_Entry
{
	int data;
	struct Data_Entry *link;
};
typedef struct Data_Entry N;
N *Start, *ptr, *temp;

void add_first();
void add_at_last();
void add_in_nth();
void list_show();

int main()
{
    system ("COLOR 0E");
	int choice;
	int C = 1;


	Start = (N *) malloc(sizeof(N));




	Start->data = NULL;
	Start->link = NULL;

	while(C == 1)
	{

		printf("\n1. For add data at First.");
		printf("\n2. For add data at Last.");
		printf("\n3. For add data at nth Possition.");
		printf("\n4. Show the created list");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				add_first();
				break;
			case 2:
				add_at_last();
				break;
			case 3:
				add_in_nth();
				break;
			case 4:
				list_show();
				break;
		}

		printf("\nIf you want to add more data press '1' (1 / 0): ");
		scanf("%d", &C);
	}

	return 0;
}

void add_first()
{
	int value;

	printf("\nInsert data to add at fisrt of the list: ");
	scanf("%d", &value);

	temp = (N *) malloc(sizeof(N));

	temp->data = value;
	temp->link = Start->link;
	Start->link = temp;
}

void add_at_last()
{
	int value;

	printf("\nInsert data to add at Last of the list ");
	scanf("%d", &value);
	temp = (N *) malloc(sizeof(N));
	ptr = Start;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}

	temp->data = value;
	temp->link = ptr->link;
	ptr->link = temp;
}


void add_in_nth()
{
	int value, posstiton;

	printf("\nAt first insert a data: ");
	scanf("%d", &value);
	printf("\nNow enter the Possition of the data: ");
	scanf("%d", &posstiton);

	temp = (N *) malloc(sizeof(N));


	ptr = Start;
	while(ptr->link != NULL && ptr->data != posstiton)
	{
		ptr = ptr->link;
	}
	if(ptr->data == posstiton)
	{
		temp->data = value;
		temp->link = ptr->link;
		ptr->link = temp;
	}
	else
	{
		printf("\nPosstiton %d is large or smaller then the list is beeing created. \n",posstiton);
	}
}


void list_show()
{
	printf("\n**********Now showing the Created list**********: \n\n");

	ptr = Start;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
		printf("%d ", ptr->data);
	}
}
