/*module-3 que_3*/
#include<stdio.h>
void main()
{
	int *pt,i;
	char b[]="ABCD";
	pt=b;
	for(i=0;i<4;i++)
	printf("\n%c",*(pt+i));

}
