#include <stdio.h>
void compare(int *x, int *y)
{
    if (*x < *y)
    {
        printf("%d is less than %d", *x, *y);
    }
    else if (*x > *y)
    {
        printf("%d is less than %d", *y, *x);
    }
    else if (*x == *y)
    {
        printf("%d is equal to %d", *x, *y);
    }
}
int main()
{
    int num1, num2;
    printf("Enter the First Number:\n");
    scanf("%d", &num1);
    printf("Enter the Second Number:\n");
    scanf("\n%d", &num2);
    compare(&num1, &num2);
    return 0;
}