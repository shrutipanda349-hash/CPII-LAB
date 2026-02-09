//Write a program to copy one string to another using strcpy//
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	printf("enter data of s1:");
	gets(s1);
	printf("enter data of s2:");
	gets(s2);
	strcpy(s1,s2);
 puts(s1);
}
