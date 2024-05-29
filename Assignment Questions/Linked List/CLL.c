#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int main()
{
    struct node *first;
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

    first->data = 45;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 21;
    fourth->next = five;

    five->data = 100;
    five->next = head;

    struct node *ptr;
    ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    return 0;
}
