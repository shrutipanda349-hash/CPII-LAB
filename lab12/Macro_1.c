#include<stdio.h>
#define ELEMENT 1,\
               2,\
               3
 int main()
 {
 	int arr[]={ELEMENT};
 	int i;
     for( i=0;i<3;i++)
     printf("%d",arr[i]);
     return 0;
 }              
