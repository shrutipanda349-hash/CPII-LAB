/*Create a program where a pointer to a pointer (e.g., **p) is used to access and 
modify a variable of type short. */
#include<stdio.h>
main()
{
	int a=10;
	int *p=&a;
	int **q=&p;
	printf("before modification:");
	printf("a=%d\n",**q);
	**q=20;
	printf("after modification:");
	printf("a=%d\n",**q);
}
