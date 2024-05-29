#include <stdio.h>
int main()
{
    int maxDegree;
    // Maximum degree of the polynomials
    printf("Enter the maximum degree of the polynomials: ");
    scanf("%d", &maxDegree);

    int poly1[maxDegree + 1];  // Coefficients for the first polynomial
    int poly2[maxDegree + 1];  // Coefficients for the second polynomial
    int result[maxDegree + 1]; // Coefficients for the result polynomial

    // Input coefficients for the first polynomial
    printf("Enter the coefficients for the first polynomial (from highest degree to constant term):\n");
    for (int i = maxDegree; i >= 0; i--)
    {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

    // Input coefficients for the second polynomial
    printf("Enter the coefficients for the second polynomial:\n");
    for (int i = maxDegree; i >= 0; i--)
    {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly2[i]);
    }

    // Add the polynomials
    for (int i = maxDegree; i >= 0; i--)
    {
        result[i] = poly1[i] + poly2[i];
    }

    // Display the result
    printf("Result of polynomial addition:\n");
    for (int i = maxDegree; i >= 0; i--)
    {
        if (result[i] != 0)
        {
            printf("%dx^%d ", result[i], i);
            if (i > 0)
            {
                printf("+ ");
            }
        }
    }
    printf("\n");

    return 0;
}