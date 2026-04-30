//Conditional compilation using #IF//
#include<stdio.h>
int main()
{
#define VALUE2
#if VALUE>3
printf("Value is greater than 3\n");
#elif VALUE==3
printf("Value is 3");
#else
printf("Value is less than or equal to 2");
#endif
return 0;
}
