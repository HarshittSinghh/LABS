#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *prev;
    struct node *next;
};
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    first->prev = NULL;
    first->info = 43;
    first->next = second;

    second->prev = first;
    second->info = 102;
    second->next = third;

    third->prev = second;
    third->info = 22;
    third->next = NULL;

    struct node *ptr = first;
    while (ptr != NULL)
    {
        printf("Current: %d\t", ptr->info);

        if (ptr->prev != NULL)
        {
            printf("Previous: %d\t", ptr->prev->info);
        }
        else
        {
            printf("No previous element\t");
        }

        printf("\n");

        ptr = ptr->next;
    }
    return 0;
}
