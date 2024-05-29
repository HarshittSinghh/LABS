#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        printf("\t");
        ptr = ptr->next;
    }
    printf("\n");
}
void sorting()
{
    int temp;
    struct node *ptr, *cpt;
    ptr = head;
    while (ptr->next != NULL)
    {
        cpt = ptr->next;
        while (cpt != NULL)
        {
            if (ptr->data > cpt->data)
            {
                temp = ptr->data;
                ptr->data = cpt->data;
                cpt->data = temp;
            }
            cpt = cpt->next;
        }
        ptr = ptr->next;
    }
}
void reversal()
{
    struct node *perv_node, *current_node, *next_node;
    perv_node = 0;
    current_node = head;
    while (head != NULL)
    {
        next_node = next_node->next;
        current_node->next = perv_node;
        perv_node = current_node;
        current_node = next_node;
    }
    head = perv_node;
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Declaration
    head = first;

    first->data = 1045;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 340;
    third->next = fourth;

    fourth->data = 600;
    fourth->next = NULL;

    printf("Linked List Before Sorting:\n");
    traversal(head);

    // sorting();
    reversal();

    printf("Linked List After Sorting:\n");
    traversal(head);
    return 0;
}