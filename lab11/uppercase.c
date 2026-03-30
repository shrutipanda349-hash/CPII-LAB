/*Create a program to convert all characters of a string to uppercase using call by 
reference.*/
#include<stdio.h>
void upper(char *s)
{
	strupr(s);
}
main()
{
	char str[]="silicon university";
	printf("Before modification:\n %s\n",str);
	printf("after modification:\n");
	
	upper(str);
	printf("%s\n",str);
}

