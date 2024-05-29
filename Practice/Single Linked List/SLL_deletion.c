#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *first;
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
void DeleteBeg()
{
    struct node *temp;
    temp = first;
    first = first->next;
    free(temp);
}
void DeleteEnd(struct node *ptr)
{
    struct node *prev = NULL;
    struct node *temp = ptr;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL)
    {
        free(temp);
        ptr = NULL;
    }
    else
    {
        prev->next = NULL;
        free(temp);
    }
}
void DeletePos()
{
    struct node *ptr1 = first; // Used for connecting nodes
    struct node *ptr2;         // Used for deletion
    int position;
    printf("Enter the Value you want to delete:");
    scanf("%d", &position);
    if (position == 1)
    {
        first = ptr1->next;
        free(ptr1);
        return;
    }
    int i = 1;
    while (i < position - 1 && ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
        i++;
    }
    ptr2 = ptr1->next;
    ptr1->next = ptr2->next;
    free(ptr2);
}
int main()
{
    struct node *second;
    struct node *third;
    struct node *fourth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Declaration
    first->data = 45;
    first->next = second;

    second->data = 55;
    second->next = third;

    third->data = 340;
    third->next = fourth;

    fourth->data = 300;
    fourth->next = NULL;

    printf("Linked List Before Deletion:\n");
    traversal(first);

    // DeleteBeg();
    // DeleteEnd(first);
    DeletePos();

    printf("Linked List After Deletion:\n");
    traversal(first);
    return 0;
}