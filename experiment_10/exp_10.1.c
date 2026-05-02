//1. Implement a function to calculate the average of elements in a 1D array.//
#include <stdio.h>


float calculateAverage(int arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (float)sum / n;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    float avg;

    avg = calculateAverage(arr, n);

    printf("Average = %.2f\n", avg);

    return 0;
}