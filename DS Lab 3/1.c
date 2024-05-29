#include <stdio.h>
int main()
{
    int r, c, nz, k;
    printf("Enter row and column elements: ");
    scanf("%d %d", &r, &c);

    int m[r][c];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    nz = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] != 0)
                nz++;
        }
    }

    int sp[nz + 1][3];
    sp[0][0] = r;
    sp[0][1] = c;
    sp[0][2] = nz;
    k = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (m[i][j] != 0)
            {
                sp[k][0] = i;
                sp[k][1] = j;
                sp[k][2] = m[i][j];
                k++;
            }
        }
    }

    printf("Sparse Matrix:\n");
    for (int i = 1; i <= nz; i++)
    {
        printf("%d %d %d\n", sp[i][0], sp[i][1], sp[i][2]);
    }

    printf("Transpose of Sparse Matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 1; j <= nz; j++)
        {
            if (sp[j][1] == i)
            {
                printf("%d ", sp[j][2]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
