//Create a program to input a string and display each character on a new line.//
#include<stdio.h>
#include<string.h>
int main()
{ char string[50];
int i=0;
printf("Enter the string data:");
gets(string);
for(i=0;string[i]!=0;i++)
{
printf("%c\n",string[i]);
}

}

