#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

int main()
{
    int n;
    printf("Enter the Number of Nodes: ");
    scanf("%d", &n);

    struct node *new_node;
    struct node *ptr = head;

    for (int i = 0; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        if (new_node == NULL)
        {
            printf("Memory allocation failed. Exiting...");
            return 1;
        }

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &new_node->data);

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

    tail->next = head;
    head->prev = tail;

    struct node *temp = head;
    printf("\nElements are as follows:\n");

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    return 0;
}
