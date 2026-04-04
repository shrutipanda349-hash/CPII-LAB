/*10. Write a program to demonstrate the use of atoi()function.*/
#include <stdio.h>
#include <stdlib.h>   

int main() {
    char str[20];
    int num;

    printf("Enter a numeric string: ");
    scanf("%s", str);

    
    num = atoi(str);

    printf("String = %s\n", str);
    printf("Converted integer = %d", num);

    return 0;
}