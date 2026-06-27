#include <stdio.h>
void callByValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nInside Call by Value:\n");
    printf("a = %d, b = %d\n", a, b);
}
void callByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nInside Call by Reference:\n");
    printf("a = %d, b = %d\n", *a, *b);
}
int main()
{
    int x = 10, y = 20;
    printf("Before Function Call:\n");
    printf("x = %d, y = %d\n", x, y);
    callByValue(x, y);
    printf("\nAfter Call by Value:\n");
    printf("x = %d, y = %d\n", x, y);
    callByReference(&x, &y);
    printf("\nAfter Call by Reference:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}