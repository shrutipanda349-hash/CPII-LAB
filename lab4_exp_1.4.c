//How can you implement a program to count the number of vowels in a string?//
#include<stdio.h>
#include<string.h>
void main()
{
	char s[40];
	int i,d=0;
	printf("Enter the string data:");
	gets(s);
	for(i=0;s[i]!=0;i++)
{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		d++;
}
	
	
	printf("num of vowels=%d",d);
}




