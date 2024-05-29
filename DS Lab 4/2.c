#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    struct node *next;
};
struct node *head = NULL;

int main()
{
    int pow;
    printf("Enter max degree:");
    scanf("%d", &pow);

    if (pow < 0)
    {
        printf("Invalid input for max degree. Please enter a non-negative integer.\n");
        return 1;
    }

    for (int i = 0; i < pow; i++)
    {
        struct node *new_node;
        new_node = (struct node *)malloc(sizeof(struct node));

        printf("Enter the coefficient for x^%d:", i + 1);
        scanf("%d", &new_node->coeff);

        new_node->next = head;
        head = new_node;
    }

    struct node *ptr = head;

    while (ptr != NULL)
    {
        for (int i = pow; i >= 0; i--)
        {
            if (ptr->coeff != 0)
            {
                printf("%dx^%d", ptr->coeff, i);

                if (i != 0 && ptr->next != NULL && ptr->next->coeff != 0)
                {
                    printf(" + ");
                }
            }
        }
        pow--;
        ptr = ptr->next;
    }

    // Free allocated memory
    struct node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
