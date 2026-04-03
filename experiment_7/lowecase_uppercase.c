/*5. Implement a function to convert all lowercase characters in a string to uppercase 
using pointers.*/
#include<stdio.h>

void upper(char *c)
{
    int i;
    for(i = 0; c[i] != '\0'; i++)
    {
        if(c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 32;
        }
    }
}

int main()
{
    char ch[] = "Silicon University";
    upper(ch);
    printf("modified = %s", ch);
}