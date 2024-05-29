#include <stdio.h>
int main()
{
    int max_d;
    printf("Enter Maximum Degree:\n");
    scanf("%d", &max_d);
    int poly[max_d + 1];
    printf("Enter the Coefficients for the Polynomial Equation:\n");
    for (int i = 0; i <= max_d; i++)
    {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly[i]);
    }
    printf("\nThe Polynomial Equation is:\n");
    for (int i = max_d; i >= 0; i--)
    {
        if (poly[i] != 0)
        {
            if (i == max_d)
            {
                printf("%dx^%d", poly[i], i); // Print the first term without '+' if it's the highest degree term
            }
            else
            {
                printf(" + %dx^%d", poly[i], i); // Print '+' for all other terms
            }
        }
    }
    printf("\n");
    return 0;
}
