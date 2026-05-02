//3. Create a function to add two 2D matrices//
#include <stdio.h>

// Function to add two matrices
void addMatrices(int a[10][10], int b[10][10], int result[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Function call
    addMatrices(a, b, result, r, c);

    printf("Resultant matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}