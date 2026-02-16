/*Write a program to define a structure for a complex number (real and imaginary
parts) and write a function to perform addition of two complex numbers.*/
#include<stdio.h>
#include<string.h>
struct complex
{
	int a;
	int b;
	
};
main()
{
struct complex c1={5,7};
struct complex c2,c3;
printf("c1=%d+%di",c1.a,c1.b);
scanf("%d %d",&c2.a,&c2.b);
printf("c2=%d+%di\n",c2.a,c2.b);
c3.a=c1.a+c2.a;
c3.b=c1.b+c2.b;
printf("c3=%d+%di\n",c3.a,c3.b);
}

