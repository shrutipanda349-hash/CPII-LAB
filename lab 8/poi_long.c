/*How would you use a pointer to change the value of a variable of type long?
Create a program to showcase this concept. */
#include<stdio.h>
 int main()
{
	long int a=543234;
	long int *ip=&a;
	printf("%ld %u\n",*ip,ip);
	printf("%d",sizeof(a));
	return 0;
}

