#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
void searching(struct node *ptr, int element)
{
    while (ptr != NULL)
    {
        if (element == ptr->data)
        {
            printf("Element Found is:%d", ptr->data);
            return;
        }
        ptr = ptr->next;
    }
    printf("Element Not Found");
}
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d \t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
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

    traversal(head);
    int element;
    printf("Enter the Element for Searching:");
    scanf("%d", &element);
    searching(head, element);
    return 0;
}