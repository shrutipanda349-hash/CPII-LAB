/*6. Write a program to find the frequency of a given element in an array using 
pointers.*/
#include <stdio.h>


int frequency(int *arr, int n, int key) {
    int i, count = 0;

    for(i = 0; i < n; i++) {
        if(*(arr + i) == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    
    result = frequency(arr, n, key);

    printf("Frequency of %d = %d", key, result);

    return 0;
}
