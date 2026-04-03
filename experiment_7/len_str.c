//Write a program to calculate the length of a string using pointers. //
#include<stdio.h>
int string_length(const char*str)
{
    const char*ptr=str;
    while(*ptr!='\0')
    {
        ptr++;

    }
    return *str;
}
int main()
{
    const char*my_string="Silicon University ";
    int length=string_length(my_string);
    printf("The string:%s\n",my_string);
    printf("Length of the string is:%d\n",length);
        return 0;
}