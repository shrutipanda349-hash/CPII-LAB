//MACRO -3 with parameter//
#include<stdio.h>
#define AREA(l,b)(l*b)
int main()
{
	int a=10,b=5;
	printf("Area of rectangle is : %d",AREA(a,b));
	return 0;
}
