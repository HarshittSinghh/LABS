#include <stdio.h>
int number_between(int a, int b, int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= a && arr[i] <= b)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Array size is %d.\n", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a, b;
    printf("Enter element a: ");
    scanf("%d", &a);
    printf("Enter element b: ");
    scanf("%d", &b);
    int result = number_between(a, b, arr, n);

    printf("The number between %d and %d are: %d\n", a, b, result);
    return 0;
}
