#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

};
struct node* end;

void traverse()
{
	if (end == NULL) {
		printf("\nList is empty\n");
		return;
	}
	struct node* temp;
	temp = end;
	while (temp != NULL) {
		printf("Data = %d\n", temp->data);
		temp = temp->next;
	}
}

void push()
{
	int num;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->next = NULL;
	printf("\nEnter number to be pushed: ");
	scanf("%d", &num);
	temp->data = num;
	temp->next = NULL;
	trav = end;

	if (end == NULL) {

		end = temp;
	}

	else {
		while (trav->next != NULL)
			trav = trav->next;
		    trav->next = temp;
	}
}

void pop()
{
	struct node* temp;
	if (end == NULL)
		printf("\nList is empty\n");
	temp = end;
	while (temp->next != NULL)
		temp = temp->next;
	if (end->next == NULL)
		end = NULL;
	else {
		free(temp);
	}
}

int main()
{
	int choice,i=0;

do
{
		printf("\n\t1 View List Stack: \n");

		printf("\t2 Push an element: \n");

		printf("\t3 Pop an element: \n");

		printf("\t4 To exit\n");

		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

    switch (choice)
    {
		case 1:
			traverse();
			break;
		case 2:
			push();
            break;
		case 3:
			pop();
			break;
		case 4:
			exit(4);
			break;
		default:
			printf("Incorrect Choice. Try Again \n");
    }

}while(i=1);

	return 0;
}
