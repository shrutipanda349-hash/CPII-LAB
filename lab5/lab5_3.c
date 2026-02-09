//Develop a program to concatenate two strings using strcat//
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50];
	printf("Enter string data of s1:");
	gets(s1);
    strcat(s1,"Hello!");
	puts(s1);
	
}
