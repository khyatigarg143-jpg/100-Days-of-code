/*
Check if the elements on the diagonal of a matrix are distinct.
*/

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int distinct = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c)
    {
        printf("Diagonal elements are defined here for a square matrix.");
        return 0;
    }

    printf("Enter the matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r - 1; i++)
    {
        for(j = i + 1; j < r; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
            }
        }
    }

    printf("Main diagonal elements: ");

    for(i = 0; i < r; i++)
    {
        printf("%d ", a[i][i]);
    }

    if(distinct == 1)
        printf("\nDiagonal elements are distinct.");
    else
        printf("\nDiagonal elements are not distinct.");

    return 0;
}2
