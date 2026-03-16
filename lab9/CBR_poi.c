/*Write a program that passes an integer variable by reference to a function using a 
pointer. Modify the value in the function and print it in the main program*/
#include<stdio.h>
void swap(int*a,int*b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
 main()
{
	int x=10,y=5;
	printf("x=%d and y=%d\n",x,y);
	swap(&x,&y);
	printf("x=%d and y=%d\n",x,y);
}
