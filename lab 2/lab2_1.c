#include<stdio.h>
int fact(int);
int main()
{int x, n ;
printf("enter a number");
scanf("%d",&n);
x=fact(n);
printf("factorial of a num is %d",x);

}

int fact(int n)
{
	if(n==0)
	return 1;
	else
		return n*fact(n-1);
}

