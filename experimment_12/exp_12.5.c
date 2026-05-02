/*5. Write a program that accepts a string as a command-line argument and converts 
it to uppercase.*/
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("No string provided.\n");
        return 1;
    }

    for (int i = 0; argv[1][i] != '\0'; i++) {
        argv[1][i] = toupper(argv[1][i]);
    }

    printf("Uppercase string: %s\n", argv[1]);

    return 0;
}