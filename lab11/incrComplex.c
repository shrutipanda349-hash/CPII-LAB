/*Write a program to create a structure named Complex and define a function 
incrComplex() to increment the value of both real and imaginary members by 1. */
#include<stdio.h>
struct complex
{
	int r;
	int i;
};
void incrComplex(struct complex*c)
{
	c->r=c->r+1;
	c->i=c->i+1;
}

main()
{
	struct complex c1={10,5};
	printf("before incr= %d+%di\n",c1.r,c1.i);
	incrComplex(&c1);
	printf("After incr=%d+%di\n",c1.r,c1.i);
}


