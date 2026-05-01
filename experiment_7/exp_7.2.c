///Write a program to copy one string to another using pointer.//
#include<stdio.h>
void stringcopy(char*s1,const char*s2)
{
    while(*s2!='0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';

}
int main()
{
    char s2 []={"Silicon University"};
    char s1 [50];
    printf("s2=%s\n",s2 );
    stringcopy(s1,s2);
    printf("s1= %s\n",s1 );
    return 0;
    
}
