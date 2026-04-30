/* WAP to print the length of a string without using the strlen() function*/
#include<stdio.h>

int string_len(char a[])
{
	int i;
	
	
	for(i=0;a[i]='/0';i++)

	return i;

}
int main()
{
	char a[]="Hello World";
	
	printf("length of stringis %d\n",string_len(a));
}
