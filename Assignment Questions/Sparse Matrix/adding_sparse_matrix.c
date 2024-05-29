#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter No. of Rows and Column: ");
    scanf("%d %d", &r, &c);
    // Defining and Taking Input for 1st Sparse Matrix
    int arr1[r][c];
    printf("Enter Elements of Array-1:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // Defining and Taking Input for 2st Sparse Matrix
    int arr2[r][c];
    printf("Enter Elements of Array-2:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    // Checking Non-zero elements then taking nz++
    int nz1 = 0, nz2 = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] != 0)
            {
                nz1++;
            }
            if (arr2[i][j] != 0)
            {
                nz2++;
            }
        }
    }
    // Assigning values to the matrix
    int sp1[nz1 + 1][3];
    int sp2[nz2 + 1][3];

    sp1[0][0] = r;
    sp1[0][1] = c;
    sp1[0][2] = nz1;

    sp2[0][0] = r;
    sp2[0][1] = c;
    sp2[0][2] = nz2;
    // Making New Matrix for non-zero element with k index = 1
    int k1 = 1, k2 = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr1[i][j] != 0)
            {
                sp1[k1][0] = i;
                sp1[k1][1] = j;
                sp1[k1][2] = arr1[i][j];
                k1++;
            }
            if (arr2[i][j] != 0)
            {
                sp2[k2][0] = i;
                sp2[k2][1] = j;
                sp2[k2][2] = arr2[i][j];
                k2++;
            }
        }
    }
    // Performing Sum of 3-tuple form of matrix
    int sum_nz = nz1 + nz2;
    int sp_sum[sum_nz + 1][3];

    sp_sum[0][0] = r;
    sp_sum[0][1] = c;
    sp_sum[0][2] = sum_nz;
    int k = 1;
    for (int i = 1; i <= nz1; i++)
    {

        sp_sum[k][0] = sp1[i][0];
        sp_sum[k][1] = sp1[i][1];
        sp_sum[k][2] = sp1[i][2] + sp2[i][2];
        k++;
    }
    for (int i = 1; i <= nz2; i++)
    {
        sp_sum[k][0] = sp2[i][0];
        sp_sum[k][1] = sp2[i][1];
        sp_sum[k][2] = sp2[i][2];
        k++;
    }

    printf("Result of Sparse Matrix Addition:\n");
    for (int i = 1; i <= sum_nz; i++)
    {
        printf("%d\t%d\t%d\n", sp_sum[i][0], sp_sum[i][1], sp_sum[i][2]);
    }
    return 0;
}
