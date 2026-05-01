/*6. Write a program to find the frequency of a given character in a string using 
pointers. */
#include<stdio.h>

int main()
{
    char str[100], ch;
    int count = 0;
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);
fflush(stdin);
    printf("Enter a character to find: ");
    scanf(" %c", &ch);   

    ptr = str;  
    while(*ptr != '\0')
    {
        if(*ptr == ch)
        {
            count++;
        }
        ptr++;   
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}
