#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the number of odd numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }

    printf("Sum of first %d odd numbers = %d", n, sum);

    return 0;
}