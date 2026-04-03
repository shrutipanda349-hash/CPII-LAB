//Implement a function to count the number of vowels in a string using pointers. //
#include<stdio.h>
int count_word(char*c)
{
int count=0,i;
for(i=0;*(c+i)!=0;i++)
if(*(c+i)=='a'||*(c+i)=='e'||*(c+i)=='i'||*(c+i)=='o'||*(c+i)=='u'||*(c+i)=='A'||*(c+i)=='E'||*(c+i)=='I'||*(c+i)=='O'||*(c+i)=='U')

count++;
return count;
}
int main()
{
    char ch[]="Silicon University";
    printf("no. of vowel is=%d",count_word(ch));

}

