/*
Find the transpose of a matrix.
*/

#include <stdio.h>

int main()
{
    int a[100][100], t[100][100];
    int m, n, i, j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original Matrix = {\n");

    for(i = 0; i < m; i++)
    {
        printf("  {");

        for(j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);

            if(j < n - 1)
                printf(" ");
        }

        printf("}\n");
    }

    printf("}\n");

    /* Finding transpose */
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose Matrix = {\n");

    for(i = 0; i < n; i++)
    {
        printf("  {");

        for(j = 0; j < m; j++)
        {
            printf("%d", t[i][j]);

            if(j < m - 1)
                printf(" ");
        }

        printf("}\n");
    }

    printf("}");

    return 0;
}