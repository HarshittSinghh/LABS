#include <stdio.h>
#include <stdlib.h>

int prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int primeSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (prime(arr[i]))
        {
            primeSum += arr[i];
        }
    }
    printf("Sum of prime elements: %d\n", primeSum);
    free(arr);
    return 0;
}
