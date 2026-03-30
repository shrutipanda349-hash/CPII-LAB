//Write a program to swap two numbers using call by reference. //
#include<stdio.h>
void swap(int *c,int *d)
{
	int t;
	t=*c;
	*c=*d;
	*d=t;
}
main()
{
	int a=10,b=20;
	printf("before swapping:\n a=%d  b=%d\n",a,b);
	printf("after swapping:\n");
	swap(&a,&b);
	printf("a=%d  b=%d\n",a,b);
	
}

