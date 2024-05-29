#include <stdio.h>
#include <stdlib.h>
// Linked List Node
struct node
{
    int info;
    struct node *prev, *next;
};
struct node *start = NULL;
struct node *tail = NULL;
struct node *createnode(int n)
{
    int info;
    struct node *newnode, *temp;
    start = (struct node *)malloc(sizeof(struct node));
    if (start == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }

    printf("Enter the data of node 1: ");
    scanf("%d", &info);
    start->info = info;
    start->next = NULL;
    start->prev = NULL;
    temp = start;
    for (int i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &info);

        newnode->info = info;
        newnode->next = NULL;
        newnode->prev = newnode;

        temp->next = newnode;
        temp = temp->next;
    }
}

// Function to traverse the linked list
void traverse()
{
    // List is empty
    if (start == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    // Else print the Data
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("Data = %d\n", temp->info);
        temp = temp->next;
    }
}
void insertAtPosition()
{
    int data, pos, i = 1;
    struct node *temp, *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;

    // Enter the position and data
    printf("\nEnter position : ");
    scanf("%d", &pos);

    // If start==NULL,
    if (start == NULL)
    {
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }

    // If position==1,
    else if (pos == 1)
    {
        printf("\nEnter number to be inserted: ");
        scanf("%d", &data);
        newnode->info = data;
        newnode->next = start;
        newnode->next->prev = newnode;
        newnode->prev = NULL;
        start = newnode;
    }

    // Change links
    else
    {
        printf("\nEnter number to be inserted: ");
        scanf("%d", &data);
        newnode->info = data;
        temp = start;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
}
void deletePosition()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = start;

    // If DLL is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Otherwise
    else
    {
        // Position to be deleted
        printf("\nEnter position : ");
        scanf("%d", &pos);

        // If the position is the first node
        if (pos == 1)
        {
            temp = start;
            start = start->next;
            if (start != NULL)
            {
                start->prev = NULL;
            }
            free(position);
            return;
        }

        // Traverse till position
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        // Change Links
        position = temp->next;
        if (position->next != NULL)
            position->next->prev = temp;
        temp->next = position->next;

        // Free memory
        free(position);
    }
}
int main()
{
    int n;
    printf("\nEnter the total number of nodes:\n");
    scanf("%d", &n);
    createnode(n);
    int choice;
    while (1)
    {

        printf("\n\t1  To see list\n");
        printf("\t2  For insertion at "
               "any position\n");
        printf("\t3  For deletion of "
               "element at any position\n");
        printf("\t4 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            insertAtPosition();
            break;
        case 3:
            deletePosition();
            break;

        case 4:
            exit(1);
            break;
        default:
            printf("Incorrect Choice. Try Again \n");
            continue;
        }
    }
    return 0;
}