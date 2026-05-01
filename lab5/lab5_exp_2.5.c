//Write a program to check if a string is a palindrome using strrev//
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	printf("enter the data of s1:");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	
	if(strcmp(s1,s2)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a pallindrome");
	}
	
}
