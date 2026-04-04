/*6. Implement a program to reverse the digits of a given integer using call by 
reference*/
#include <stdio.h>


void reverse(int *num) {
    int n = *num;
    int rev = 0;

    while(n != 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    *num = rev;  
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    reverse(&number);

    printf("Reversed number = %d", number);

    return 0;
}