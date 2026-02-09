//Write a program to replace spaces in a string with hyphens//
#include<stdio.h>
#include<string.h>
void main()
{
	char s[50];
	int i;
	printf("Enter the string data:");
	gets(s);
	for(i=0;s[i]!=0;i++)
	if(s[i]== ' ')
	{
		s[i]='-';
	}
	printf("modified string: %s",s);
}
