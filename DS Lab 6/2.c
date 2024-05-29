#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int element)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->data = element;
    new_node->next = top;
    top = new_node;
    printf("Pushed %d onto the stack\n", element);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = top;
    printf("Popped %d from the stack\n", temp->data);
    top = temp->next;
    free(temp);
}

bool isEmpty()
{
    return top == NULL;
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    struct Node *current = top;
    printf("Stack elements: ");
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    int choice, element;

    do
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. IsEmpty\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &element);
            push(element);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (isEmpty())
            {
                printf("Stack is empty\n");
            }
            else
            {
                printf("Stack is not empty\n");
            }
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 6);
    return 0;
}
