/*Create a program to calculate the sum of integers passed as command-line 
arguments*/
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char*argv[])
{
int i,a,b,add;
for(i=1;i<argc;i++)
{
printf("\n [%d] :%s",i,argv[i]);
}
a=atoi(argv[1]);
b=atoi(argv[2]);
add=a+b;
printf("\naddition=%d\n",add);

}