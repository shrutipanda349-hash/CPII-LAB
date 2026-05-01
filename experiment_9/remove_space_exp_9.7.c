/*7. Create a program to remove all spaces from a string using call by reference.*/
#include <stdio.h>


void removeSpaces(char *str) {
    int i = 0, j = 0;

    while(str[i] != '\0') {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

   
    removeSpaces(str);

    printf("String without spaces: %s", str);

    return 0;
}
