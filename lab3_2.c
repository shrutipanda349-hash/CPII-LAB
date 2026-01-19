#include<stdio.h>
#include<string.h>
void main()
{
	int i, count=0;
	char name[20];
	printf("Enter your name");
	gets(name);

	for(i=0; name[i]!='\0';i++)
	{
		count++;
	}
	if(count==0)
	{
	printf("null");
	}
	else
	{
		printf("%d",count);	
	
		
	}

}

