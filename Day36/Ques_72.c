/*
Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main() {
    int a[100][100], r, c, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Matrix = {\n");

    for(i = 0; i < r; i++) {
        printf("  {");

        for(j = 0; j < c; j++) {
            printf("%d", a[i][j]);

            if(j < c - 1)
                printf(" ");
        }

        printf("}\n");
    }

    printf("}\n");

    printf("Sum of all elements = %d", sum);

    return 0;
}