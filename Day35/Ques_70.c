/*
Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for (j = 1; j <= k; j++)
    {
        temp = arr[n - 1];

        for (i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp;
    }

    printf("Array after right rotation:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}