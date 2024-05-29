#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *create()
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    int x;
    printf("\nEnter -1 for no node\n");
    printf("Enter the data:");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    new_node->data = x;
    printf("Enter data of left node of %d:", x);
    new_node->left = create();
    printf("Enter data right node of %d:", x);
    new_node->right = create();
    return new_node;
}
void inOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}
int main()
{
    root = create();

    printf("In-order Traversal: ");
    inOrderTraversal(root);

    printf("\nPre-order Traversal: ");
    preOrderTraversal(root);

    printf("\nPost-order Traversal: ");
    postOrderTraversal(root);
    return 0;
}