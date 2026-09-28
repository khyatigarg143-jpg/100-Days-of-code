/*
Read and print a matrix.
*/

#include <stdio.h>

int main() {
    int a[100][100], r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix elements are:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
    }

    return 0;
}
