/*8. Write a program to count the number of even and odd elements in an array 
using pointers*/
#include <stdio.h>


void countEvenOdd(int *arr, int n, int *even, int *odd) {
    int i;

    *even = 0;
    *odd = 0;

    for(i = 0; i < n; i++) {
        if(*(arr + i) % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}

int main() {
    int arr[100], n, i;
    int evenCount, oddCount;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("Even elements = %d\n", evenCount);
    printf("Odd elements = %d\n", oddCount);

    return 0;
}
