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
void traversal(struct node *ptr)
{
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}
int main()
{
    int n;
    printf("Enter the Number of Node you want to create:");
    scanf("%d", &n);
    printf("Enter the data:\n");
    struct node *temp;
    for (int i = 0; i < n; i++)
    {
        struct node *new_node;
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->prev = NULL;
        new_node->next = NULL;
        if (head == NULL || tail == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            // temp->prev = prev;
            new_node->prev = tail;
            tail = new_node;
        }
    }
    printf("Created linked list is as follows:\n");
    traversal(head);
    return 0;
}
