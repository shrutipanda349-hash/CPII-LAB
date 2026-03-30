//Write a program to reverse a string using call by reference//
#include<stdio.h>
void reverse(char *s)
{
	strrev(s);
}
main()
{
	char str[]="silicon university";
	printf("Before modification:\n %s\n",str);
	printf("after modification:\n");
	
	reverse(str);
	printf("%s\n",str);
}

