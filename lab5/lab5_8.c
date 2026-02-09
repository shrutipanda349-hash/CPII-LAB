//Develop a program to convert a string to uppercase using strupr//
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100];
	printf("enter the data:");
	gets(s1);
	strupr(s1);
	printf("str in uper case:%s",s1);
	
}

