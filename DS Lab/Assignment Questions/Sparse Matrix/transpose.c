#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the no. of Rows and Column:\n");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the Elements into Array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Entered matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", a[j][i]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}