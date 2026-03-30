//Create a program to remove all spaces from a string using call by reference.//
#include<stdio.h>
void remove(char *s)
{
	int i;
	for(i=0;i<'\0';i++)
	{
		if(s[i]==32)
		{
			s[i]=s[i+1];
		}
	}
	
}
main()
{
	char str[]="sil icon uni ver sity";
	printf("Before modification:\n %s\n",str);
	printf("after modification:\n");
	
	remove(str);
	printf("%s\n",str);
}

