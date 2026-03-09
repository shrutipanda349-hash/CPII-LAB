/*Write a program demonstrating pointer arithmetic with a double array. Show
how to iterate through the array using a pointer.*/
#include<stdio.h>
int main()
{
	
	double a[5]={2.343,3.8976,1.4,5,6.9};
	double *ip=&a;
	int i;
	
	for(i=0;i<5;i++)
	printf("\n%lf\n  ",*(ip+i));
	return 0;
}
	
	
	
	
	
	
	
