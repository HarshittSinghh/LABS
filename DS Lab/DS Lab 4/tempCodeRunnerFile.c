#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void insertion(struct node *ptr)
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
    new_node->next = ptr->next;
    ptr->next = new_node;

    // Inserting data into new_node
    printf("Enter data:");
    scanf("%d", &new_node->data);
}
void Deletion(struct node *ptr)
{
    printf("Enter position to delete:");
    int position, i = 1;
    scanf("%d", &position);
    // Deletion at Beginning
    if (position == 1)
    {
        head = ptr->next;
        free(ptr);
    }

    // Deletion at Any Position
    else
    {
        while (ptr != NULL && i <= position - 1)
        {
            if (i == position - 1)
            {
                ptr->next = ptr->next->next;
            }
            if (i == position)
            {
                free(ptr);
            }
            i++;
            ptr = ptr->next;
        }
    }
    else if (i > position)
    {
        printf("Overflow");
    }
}
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

    traversal(head);
    int fun;
    printf("\nEnter\n1)Insertion.\n2)Deletion.\n");
    scanf("%d", &fun);
    if (fun == 1)
    {
        insertion(head);
        traversal(head);
    }
    else if (fun == 2)
    {
        Deletion(head);
        traversal(head);
    }
    return 0;
}
