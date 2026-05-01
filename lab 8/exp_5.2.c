/*Explain how you can use a pointer to access and print elements of an integer
array*/
#include<stdio.h>
int main()
{
	int a[5]={2,3,4,5,6};
	int *ip=a;
	int i;
	
	for(i=0;i<5;i++)
	printf("%d\n %u\n ",*(ip+i),(ip+i));
	return 0;
}

