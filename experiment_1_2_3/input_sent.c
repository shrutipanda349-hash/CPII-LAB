/*5. Create a program to input a sentence and display the total number of words. */
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, count = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);


    while(str[i] != '\0') {
        // Check for start of a word
        if((i == 0 && str[i] != ' ') || 
           (str[i] != ' ' && str[i-1] == ' ')) {
            count++;
        }
        i++;
    }

    printf("Total number of words = %d", count);

    return 0;
}