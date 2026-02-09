//Implement a program to check if a substring exists within a string using strstr. //
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100],s3[100];
	printf("Enter the data of s1:");
	gets(s1);
	pirntf("Enter the data of s2:");
	gets(s2);
    s3=strstr(s1,s2);
	printf("%s",s3);

}
