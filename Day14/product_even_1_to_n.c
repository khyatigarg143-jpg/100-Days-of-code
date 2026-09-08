#include <stdio.h>

int main()
{
    int n, product = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d (", product);

    for (int i = 2; i <= n; i = i + 2)
    {
        printf("%d", i);

        if (i + 2 <= n)
        {
            printf(" * ");
        }
    }

    printf(")");

    return 0;
}