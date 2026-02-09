//Develop a program to count occurrences of a specific character in a string//
#include<stdio.h>
#include<string.h>
void main()
{
	char s[50],ch;
	int i,c=0;
	printf("Enter the string data:");
	gets(s);
	printf("Enter the char you want to count:");
	scanf("%c",&ch);
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]==ch)
		c++;
	}
	printf("result:%d",c);
	
	
}
