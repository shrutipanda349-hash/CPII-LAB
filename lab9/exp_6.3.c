//Write a program to reverse the elements of an array in-place using pointers. //
#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=&a,i,j;
	int temp;
	printf("actual array element:");
	for(i=0;i<10;i++)
	{
	printf("\n%d\n",*(p+i));
    }
    for(i=0,j=9;i<5;i++,j--)
    {
    temp= *(p+i);
    *(p+i)=*(p+j);
    *(p+j)=temp;
}
printf("after reversing:\n");
for(i=0;i<10;i++)
{
	printf("\n%d\n",*(p+i));
}    
    
}
