#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *first;

int main()
{

    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *five;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));

    head = first;

    first->data = 43;
    first->next = second;

    second->data = 10;
    second->next = third;

    third->data = 112;
    third->next = fourth;

    fourth->data = 334;
    fourth->next = five;

    five->data = 300;
    five->next = NULL;

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = first->data;
    first->data = five->data;
    five->data = ptr->data;
    five->next = NULL;

    // Print the modified linked list to verify
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    return 0;
}