#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *tail = NULL;

void insert_pos(struct node *ptr)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    int position;
    printf("Enter the Position you want to insert:");
    scanf("%d", &position);
    // Insertion at 1st Position
    if (position == 1)
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    // Insertion at Last Position
    if (new_node->next == NULL)
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            ptr->next = new_node;
        }
    }
    // Insertion in between
    int i = 1;
    while (ptr != NULL && i < position - 1)
    {
        ptr = ptr->next;
        i++;
    }
    new_node->prev = ptr;
    new_node->next = ptr->next;
    ptr->next = new_node;

    // Inserting data into new_node
    printf("Enter data:");
    scanf("%d", &new_node->data);
}
void traversal(struct node *ptr)
{
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the Number of Node you want to create:");
    scanf("%d", &n);
    printf("Enter the data:\n");

    for (int i = 0; i < n; i++)
    {
        struct node *new_node;
        new_node = (struct node *)malloc(sizeof(struct node));
        if (new_node == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }

        scanf("%d", &new_node->data);
        new_node->prev = NULL;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
    }

    printf("Created linked list before insertion:\n");
    traversal(head);

    insert_pos(head);

    printf("Created linked list after insertion:\n");
    traversal(head);

    return 0;
}
