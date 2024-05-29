#include <stdio.h>
int n;
int main()
{
    int arr[5] = {3, 9, 6, 2, 5};
    int element, position;
    printf("Enter the Element & Position:\n");
    scanf("%d %d", &element, &position);
    for (int i = 5; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = element;
    n++;
    printf("Elements of an Array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}
