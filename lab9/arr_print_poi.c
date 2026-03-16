//Write a program to input an array of integers and print them using pointers.//
main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=&a,i;
	printf("print the array:");
	for(i=0;i<10;i++)
	{
		printf("\n%d\n",*(p+i));
	}
	
}
