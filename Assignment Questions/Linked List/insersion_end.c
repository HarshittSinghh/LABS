#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node
struct Node
{
    int info;
    struct Node *next;
};
struct Node *head = NULL;

void create_list(int n)
{
    int i;
    struct Node *new_node, *ptr;
    printf("Enter the info of New Node:");
    for (i = 0; i < n; i++)
    {
        new_node = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &new_node->info);
        new_node->next = NULL;
        if (head == NULL)
        {
            head = new_node;
            ptr = new_node;
        }
        else
        {
            ptr->next = new_node;
            ptr = new_node;
        }
    }
}
void insert_end()
{
    struct Node *new_node, *temp;
    new_node = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data you want to insert:");
    scanf("%d", &new_node->info);
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return; // If the list is empty, the new node becomes the head.
    }
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->info);
        printf("\t");
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create the linked list
    create_list(n);

    // Traverse and print the linked list
    printf("Linked List:\n");
    traversal(head);

    insert_end();
    printf("Linked List after insertion:\n");
    traversal(head);
    return 0;
}
