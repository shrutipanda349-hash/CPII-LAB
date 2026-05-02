// 6. Write a program using #define to declare constants and use them in arithmetic 
// operations.
#include <stdio.h>

// Defining constants using #define
#define A 10
#define B 5

int main() {
    int sum, diff, product;
    float division;

    sum = A + B;
    diff = A - B;
    product = A * B;
    division = (float)A / B;

    printf("A = %d, B = %d\n", A, B);
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    printf("Division = %.2f\n", division);

    return 0;
} 