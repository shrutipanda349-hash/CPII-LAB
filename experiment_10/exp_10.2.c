//2. Implement a function to search for a specific element in a 1D array//
#include <stdio.h>

// Function to search element
int searchElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;   // return index if found
        }
    }
    return -1;  // return -1 if not found
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int result;

    result = searchElement(arr, 5, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}