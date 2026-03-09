/*Create a program to illustrate the use of pointers with character variables.
Include both reading and printing the character via the pointer.*/
#include<stdio.h>
int main()
{
	char b='a';
	char d='z';
	char *bp=&b;
	char *dp=&d;
	printf("%c %u\n",*bp,bp);
	printf("%c %u\n",*dp,dp);
	return 0;
	
}
