//Write a program to print all command-line arguments passed to the program//
#include<stdio.h>

void main(int argc,char*argv[])
{
int i;
for(i=1;i<argc;i++)
{
printf("\n [%d] :%s",i,argv[i]);
}
}