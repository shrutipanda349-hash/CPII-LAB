/*Demonstrate the use of bit fields with structure to store specific information 
compactly (e.g., flags or settings). */
#include<stdio.h>
#include<string.h>
struct date{
    int d:5;
     int m:4;
     float y;
};
int main()
{
    printf("Size of date is %lu bytes\n",sizeof(struct date));
     return 0; 
}
