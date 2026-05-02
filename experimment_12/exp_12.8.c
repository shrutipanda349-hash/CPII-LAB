//8. Write a macro to calculate the square of a number. //
#include <stdio.h>


#define SQUARE(x) ((x) * (x))

int main() {
    int num = 5;
    int result;

    result = SQUARE(num);

    printf("Square of %d = %d\n", num, result);

    return 0;
}