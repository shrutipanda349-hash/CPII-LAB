//Create a function to sort an array in ascending order using pointers//
#include<stdio.h>
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=&a,i,j;
	int temp;
	printf("actual array element:");
	for(i=0;i<10;i++)
	{
	printf("\n%d",*(p+i));
    }
    for(i=0,j=i+1;i<10,j<10;i++,j++)
    {
    	if(*(p+j)>*(p+j+1))
    temp= *(p+j);
    *(p+j)=*(p+j+1);
    *(p+j+1)=temp;
}
printf("after sorting:\n");
for(i=0;i<10;i++)
{
	printf("\n%d\n",*(p+i));
}    
    
}
