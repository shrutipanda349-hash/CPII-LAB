/* recursive function to print nyumbers*/
# include<stdio.h>
int num(int,int);
int main()
{int x,y,a;
	printf("enter a numbers");
	scanf("%d%d",&x ,&y);
	a=num(x,y);
return a;
}
int num (int x,int y)
{
	if (x>y)
		printf("END");
	else
	{printf("%d\n",x);
		num(x+1,y);
	}
}

		
	
	
