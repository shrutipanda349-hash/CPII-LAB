/* recursive function to printall even numbers*/
#include<stdio.h>
int even(int,int);
int main()
{
	int x,y,a;
	printf("enter the numbers");
	scanf("%d%d",&x,&y);
	a=even(x,y);
	return a;
}
int even(int x,int y)
{
	if(x>y)
		printf("end");
	else
	{	
		if(x%2==0)
		{
			printf("%d\n",x);

		}
		even(x+1,y);
	}

}

