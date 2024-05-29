#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the Number of Rows and Column:\n");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter the Elements of Array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Checking Non-zero Elements
    int nz = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != 0)
            {
                nz++;
            }
        }
    }
    // Assigning value to the sparse matrix
    int sp[nz + 1][3];
    sp[0][0] = r;
    sp[0][1] = c;
    sp[0][2] = nz;
    // Making New Matrix for non-zero element with k index = 1
    int k = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != 0)
            {
                sp[k][0] = i;
                sp[k][1] = j;
                sp[k][2] = arr[i][j];
                k++;
            }
        }
    }
    // Printing Matrix in 3 Tuple Form
    printf("Sparse Matrix in 3-Tuple form:\n");
    for (int i = 1; i <= nz; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sp[i][j]);
        }
        printf("\n");
    }
    return 0;
}