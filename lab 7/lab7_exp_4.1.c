//Demonstrate: How do you declare a bit-field to store a value that ranges from 0 to 15?//
 #include<stdio.h>
 struct abc
 {
 	unsigned int a:4;
};
 int main()
 {
 	struct abc A1,A2,A3,A4;
 	A1.a=-4;
 	A2.a=24;
 	A3.a=0;
 	A4.a=13;
 	printf("size of  abc is %u byte\n",sizeof (struct abc));
 	printf(" A1.a=%u",A1.a);
 		printf(" A2.a=%u",A2.a);
 			printf(" A3.a=%u",A3.a);
 				printf(" A4.a=%d",A4.a);
 	
 	return 0;
 }
