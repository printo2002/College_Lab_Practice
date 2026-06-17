#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insert_end(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL)
    {
	*head = new_node;
    }
    else
    {
	struct node *temp = *head;
	while (temp->next != NULL)
	{
	    temp = temp->next;
}
	temp->next = new_node;
    }
printf("Element %d inserted at the end\n", data);
}

void insert_beginning(struct node **head, int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
 printf("Element %d inserted at the beginning\n", data);
}

void insert_at_position(struct node **head, int data, int position)
{
struct node *temp=*head;
int i;
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
if (position == 1)
    {
	new_node->next = *head;
	*head = new_node;
printf("Element %d inserted at position %d\n", data, position);
	return;
    }
for ( i = 1; temp != NULL && i < position - 1; i++)
    {
	temp = temp->next;
    }

    if (temp == NULL)
    {
	printf("Position out of range\n");
	free(new_node);
	return;
    }

    new_node->next = temp->next;
    temp->next = new_node;

    printf("Element %d inserted at position %d\n", data, position);
}

void delete_beginning(struct node **head)
{
struct node *temp=*head;
    if (*head == NULL)
    {
	printf("List is empty\n");
	return;
    }

    *head = (*head)->next;

    printf("Element %d deleted from the beginning\n", temp->data);
    free(temp);
}

void delete_end(struct node **head)
{
struct node *temp=*head;
    if (*head == NULL)
    {
	printf("List is empty\n");
	return;
    }

    if (temp->next == NULL)
    {
	printf("Element %d deleted from the end\n", temp->data);
	free(temp);
	*head = NULL;
	return;
    }

    while (temp->next->next != NULL)
    {
	temp = temp->next;
    }

    printf("Element %d deleted from the end\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void delete_at_position(struct node **head, int position)
{
struct node *temp;
struct node *del;
int i;
temp=*head;
    if (*head == NULL)
    {
	printf("List is empty\n");
	return;
    }
    if (position == 1)
    {
	*head = temp->next;
	printf("Element %d deleted from position %d\n", temp->data, position);
	free(temp);
	return;
    }

    for ( i = 1; temp->next != NULL && i < position - 1; i++)
    {
	temp = temp->next;
    }

    if (temp->next == NULL)
    {
	printf("Position out of range\n");
	return;
    }

    del = temp->next;
    temp->next = del->next;

    printf("Element %d deleted from position %d\n", del->data, position);
    free(del);
}
void display(struct node *head)
{
struct node *temp=head;
    if (head == NULL)
    {
	printf("List is empty\n");
	return;
    }
    while (temp != NULL)
    {
	printf("%d -> ", temp->data);
	temp = temp->next;
    }

    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;
    int choice, value, pos;
    clrscr();
    do
    {
	printf("\nSingly Linked List Operations\n");
	printf("1. Insert at the End\n");
	printf("2. Insert at the Beginning\n");
	printf("3. Insert at a Specific Position\n");
	printf("4. Delete from the Beginning\n");
	printf("5. Delete from the End\n");
	printf("6. Delete from a Specific Position\n");
	printf("7. Display the List\n");
	printf("8. Exit\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		printf("Enter element: ");
		scanf("%d", &value);
		insert_end(&head, value);
		break;

	    case 2:
		printf("Enter element: ");
		scanf("%d", &value);
		insert_beginning(&head, value);
		break;

	    case 3:
		printf("Enter element: ");
		scanf("%d", &value);
		printf("Enter position: ");
		scanf("%d", &pos);
		insert_at_position(&head, value, pos);
		break;

	    case 4:
		delete_beginning(&head);
		break;

	    case 5:
		delete_end(&head);
		break;

	    case 6:
		printf("Enter position: ");
		scanf("%d", &pos);
		delete_at_position(&head, pos);
		break;

	    case 7:
		display(head);
		break;

	    case 8:
		printf("Exiting...\n");
		break;

	    default:
		printf("Invalid choice\n");
	}

    } while(choice != 8);

    return 0;
}