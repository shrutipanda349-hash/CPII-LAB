//9. Implement a macro to determine the maximum of two numbers//
#include <stdio.h>


#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    int result;

    result = MAX(x, y);

    printf("Maximum of %d and %d = %d\n", x, y, result);

    return 0;
}