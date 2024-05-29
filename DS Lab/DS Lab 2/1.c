#include <stdio.h>
int n;
void insertElement(int arr[])
{
    int element, position;
    printf("Enter the Element & Position:\n");
    scanf("%d %d", &element, &position);
    for (int i = n - 1; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = element;
    n++;
    printf("Elements of an Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void Delete(int arr[])
{
    int position;
    printf("Enter the Position:");
    scanf("%d", &position);
    for (int i = position; i <= n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    n--;
    printf("Elements of an Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void linearSearch(int arr[])
{
    int items;
    printf("Enter item to Search:");
    scanf("%d", &items);
    for (int i = 0; i < n; i++)
    {
        if (items == arr[i])
        {
            printf("Item %d found", arr[i]);
            break;
        }
        else
        {
            printf("Item Not Found");
            break;
        }
    }
}
int main()
{
    int arr[100];
    printf("Enter the Length of Array:");
    scanf("%d", &n);
    printf("Enter the values of Array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("***Menu***\n 1.Insert\n 2.Delete\n 3.Linear Search\n 4.Traverse\n 5.Exit\n");
    int menu;
    scanf("%d", &menu);
    if (menu == 1)
    {
        insertElement(arr);
    }
    else if (menu == 2)
    {
        Delete(arr);
    }
    else if (menu == 3)
    {
        linearSearch(arr);
    }
    else if (menu == 4)
    {
        printf("");
    }
    else if (menu == 5)
    {
        printf("Menu Exited");
    }
    return 0;
}
