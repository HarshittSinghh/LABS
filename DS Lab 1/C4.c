#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int real;
    int imag;
};
void sum(struct complex num1, struct complex num2);
void mul(struct complex *num1, struct complex *num2);
int main()
{
    struct complex num1, num2, *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter complex number 1: ");
    scanf("%d %d", &num1.real, &num1.imag);
    printf("Enter complex number 2: ");
    scanf("%d %d", &num2.real, &num2.imag);
again:
    printf("\nEnter your choice: 1 for sum 2 for product and any other to exit choice:\n");
    int c;
    scanf("%d", &c);
    if (c == 1)
    {
        sum(num1, num2);
    }
    else if (c == 2)
    {
        mul(ptr1, ptr2);
    }
    else
        printf("Thankyou");

    return 0;
}
void sum(struct complex num1, struct complex num2)
{
    int real = num1.real + num2.real;
    int imag = num1.imag + num2.imag;
    printf("Sum is %d + (%di)", real, imag);
}
void mul(struct complex *ptr1, struct complex *ptr2)
{
    int real = (ptr1->real) * (ptr2->real) - (ptr1->imag) * (ptr2->imag);
    int imag = (ptr1->real) * (ptr2->imag) + (ptr2->real) * (ptr1->imag);
    printf("Product is %d + (%di)",real, imag);
}