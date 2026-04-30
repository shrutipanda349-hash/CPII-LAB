/*Design a program that checks if the number of command-line arguments meets 
specific criteria (e.g., minimum number of arguments)*/
#include<stdio.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
int c=7; 
if(c<argc)
{ 
printf("it exceeds the minimum no. of argument\n");
}
else if(c>argc)
{
printf("it is less than the minimum argument required\n");
}
else
{
printf("its satisfies the requirement\n");
}
}