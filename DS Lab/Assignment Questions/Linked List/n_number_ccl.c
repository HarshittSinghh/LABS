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
    int n;
    printf("Enter the number of Nodes:");
    scanf("%d", &n);
    struct node *new_node, *ptr;
    ptr = head;
    printf("Enter data to insert:\n");
    for (int i = 0; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        if (head == NULL)
        {
            head = new_node;
            ptr = head;
        }
        else
        {
            ptr->next = new_node;
            ptr = new_node;
        }
    }
    new_node->next = head;

    struct node *temp = head;
    printf("Data in the list is as Follows:\n");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    return 0;
}