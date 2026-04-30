#include<stdio.h>
void main()
{
	FILE *fp
	int c=0,l=0,w=0,i;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("cannot open the file");
		exit(1);
	}
	else
	{
		for(i=0;fp!=EOF;i++)
		{
			c++;
			if(i==32)
			{
				w++;
			}
			else if(i=="\n")
			{
				l++;
			}
		}
	}
}
