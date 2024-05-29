#include <stdio.h>
int main()
{
    int r, c, nz, k;
    printf("Enter row and Column element:\n");
    scanf("%d %d", &r, &c);
    int m[r][c];
    printf("Enter the Element of Sparse Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("Sparse Matrix in 3 Tuple form:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] != 0)
            {
                printf("\n %d %d %d", i, j, m[i][j]);
            }
        }
    }
    return 0;
}
