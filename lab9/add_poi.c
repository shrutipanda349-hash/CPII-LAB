/*Implement a function to calculate the sum of all elements in an array using 
pointers*/
int addition(int *);
main()
{
	int a[10]={1,2,3,4,5,6,10,7,8,9};
	int *p= a;
	int i;
	printf("sum: %d",addition(a));
	
	
}
 int addition(int *p)
 {
     int i; 
      int add=0;
      for(i=0;i<10;i++)
      {
      	
      	 add=add+*(p+i);
      	 
      }
      return add;
}

