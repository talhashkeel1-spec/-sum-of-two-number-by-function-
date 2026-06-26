#include <stdio.h>


int sum(int a, int b);

int main()
{
    int x, y, result;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    result = sum(x, y);

    printf("Sum = %d", result);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
