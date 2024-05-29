#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void deleteBeg()
{
    struct node *temp;
    temp = head;
    head = head->next;
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
int main()
{
    int n;
    printf("Enter the number of node:");
    scanf("%d", &n);
    struct node *newnode, *ptr;
    for (int i = 1; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter data for node %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            ptr = newnode;
        }
        else
        {
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    printf("Linked List before deletion:\n");
    traversal(head);
    DeleteEnd(head);
    printf("Linked List After deletion:\n");
    traversal(head);
    return 0;
}