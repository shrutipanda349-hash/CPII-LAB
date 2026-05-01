//Create a program to find the length of a string using strlen//
#include<stdio.h>
#include<string.h>
void main()
	{
	char s1[100];
	int l;
	printf("Enter string data of s1:");
	gets(s1);
    l=strlen(s1);
	printf("length of s1:%d",l);
}
