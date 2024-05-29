#include <stdio.h>

void display_upper_triangular(int n, int arr[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (j = i; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void display_elements_above_and_below(int n, int arr[n][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j)
            {
                printf("%d ", arr[i][j]);
            }
            else if (i > j)
            {
                printf("%d ", arr[j][i]);
            }
            else // i == j (main diagonal)
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int count_nonzero_elements(int n, int arr[n][n])
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, i, j, arr[10][10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The number of nonzero elements in the matrix is: %d\n", count_nonzero_elements(n, arr));

    printf("The upper triangular matrix is:\n");
    display_upper_triangular(n, arr);

    printf("The elements above and below the main diagonal are:\n");
    display_elements_above_and_below(n, arr);

    return 0;
}
