//Write a program to compare two strings using strcmp.//
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50],s2[30];
	printf("Enter the string data of s1:");
	gets(s1);
	printf("Enter the string dat of s2:");
	gets(s2);
	if(strcmp(s1,s2)==0)
	{
		printf("same");
	}
	else
	{
		printf("not same");
	}
	
}
