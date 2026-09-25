/*
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, num, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &num);

    pos = 0;

    while (pos < n && arr[pos] < num)
    {
        pos++;
    }

    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}