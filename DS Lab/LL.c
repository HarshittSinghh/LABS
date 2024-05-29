#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

int main()
{
    struct node *first = (struct node *)malloc(sizeof(struct node));

    first[0].info = 10;
    first[1].info = 12;
    first[2].info = 13;
    first[3].info = 212;

    first[0].next = &first[1];
    first[1].next = &first[2];
    first[2].next = &first[3];
    first[3].next = NULL;

    struct node *ptr = &first[0];

    while (ptr != NULL)
    {
        printf("%d \t", ptr->info);
        ptr = ptr->next;
    }

    free(first);
    return 0;
}
