#include<stdio.h>
void main()
{
	FILE *p;
	int c;
	p=fopen("abc.txt","r");
	if (p==NULL)
	{
		printf("NO file exist.\n");
	}
	else
	{  printf("file exist.\n");
	   do
	   { 
	      c=getc(p);
	      printf("%c\n",c);
	   }while(c!=EOF);
    }
	fclose(p);
}
