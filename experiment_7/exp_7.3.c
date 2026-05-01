//Implement a function to compare two strings using pointers//
#include<stdio.h>
#include<string.h>
int str_cmp(char*s1,char*s2)
{
    int i;
    int c;
for(i=0;*(s1+i)!=0||*(s2+i)!=0;i++)
{
    if((*(s1+i)-*(s2+i))!=0)
    {
        c=*(s1+i)-*(s2+i);
    }

    break;
}
return c;
}

int main()
{
    if(str_cmp("RAM","RAMA"))
    printf("strings are not equal");
    else
    printf("strings are equal");
    
}
