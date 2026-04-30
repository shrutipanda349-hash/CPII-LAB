//WAP to accept a 2 no. in command line and print the addition and substraction of it//
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char*argv[])
{
int i,a,b,add,sub;
for(i=1;i<argc;i++)
{
printf("\n [%d] :%s",i,argv[i]);
}
a=atoi(argv[1]);
b=atoi(argv[2]);
add=a+b;
printf("\naddition=%d\n",add);
sub=b-a;
printf("\nsubstraction=%d\n",sub);
}