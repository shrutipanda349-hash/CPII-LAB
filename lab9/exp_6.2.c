//Implement a function to find the largest element in an array using pointers.//
#include<stdio.h>
int largest(int *);
main()
{
	int a[10]={1,2,3,4,5,6,10,7,8,9};
	int *p=&a,i;
	printf("print the largest elementof the  array: %d",largest(a));
	
	
}
 int largest(int *p)
 {
     int i; 
      int max=*(p+0);
      for(i=0;i<10;i++)
      {
      	if(*(p+i)>max)
      	 max=*(p+i);
      	 
      }
      return max;
}
