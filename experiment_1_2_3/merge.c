/*9. Develop a program to merge two strings alternately (e.g., "abc" and "123" → 
"a1b2c3").*/
#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0, k = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    
    while(str1[i] != '\0' && str2[j] != '\0') {
        result[k++] = str1[i++];
        result[k++] = str2[j++];
    }

    
    while(str1[i] != '\0') {
        result[k++] = str1[i++];
    }

    while(str2[j] != '\0') {
        result[k++] = str2[j++];
    }

    result[k] = '\0';

    printf("Merged string: %s", result);

    return 0;
}