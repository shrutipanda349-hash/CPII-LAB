//macro_7//
#include<stdio.h>
//not defining MAX to trigger pragma message
//#define MAX 100
void main()
{
	#ifndef MAX
	#pragma message("MAX is not defined.")
	#endif
	#ifdef MAX
	printf("MAX is defined!\n");
	#endif
	
}
