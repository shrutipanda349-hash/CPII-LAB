//5. Create a program to calculate the transpose of a matrix using call by reference//
#include <stdio.h>


void transpose(int *a, int *t, int r, int c) {
    int i, j;

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            *(t + j*r + i) = *(a + i*c + j);
        }
    }
}

int main() {
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], t[c][r];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    transpose(&a[0][0], &t[0][0], r, c);

    printf("Transpose of matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}