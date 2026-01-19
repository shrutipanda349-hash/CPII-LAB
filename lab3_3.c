#include<stdio.h>
#include<string.h>
void main()
{
	int i, count=0;
	char s[259];
	gets(s);
    for(i=0; s[i]!=0;i++)
	{
		if(s[i]==' ')
		{
			count++;	
		}
	
	}	
		printf("%d",count+1);	

}
