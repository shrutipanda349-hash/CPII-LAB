#include<stdio.h>
void stringupr(char s[])
{int i;
    for(i=0;s[i]!=0;i++)
    {
       if(i==0)
{   if(s[i]>=97&&s[i]<=122)
    s[i]=s[i]-32;
    continue;
}
    if(s[i]==32)
{   i++;


    if(s[i]>=97&&s[i]<=122)
    {s[i]=s[i]-32;
    }
}
    }
}
int main()
{
    char str[]= "hello beautiful girl";
    stringupr(str);
    printf("%s",str);
    return 0;
}
