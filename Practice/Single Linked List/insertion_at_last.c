#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *insertAtLast(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = data;
    ptr->data = data;
    return ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 232;
    third->next = NULL;

    printf("Original List:\n");
    traversal(head);
    int data;
    printf("Enter Element to insert at 1st position:");
    scanf("%d", &data);
    head = insertAtLast(head, data);

    printf("\nList after Insertion at Last:\n");
    traversal(head);

    return 0;
}