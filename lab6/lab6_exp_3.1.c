/*Write a program to define a structure for a student containing fields for name,
roll number, and marks. Input and display the details*/
#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int roll_no;
	float mark;
};
main()
{
	struct student s1,s2;
	printf("Enter the details of student s1:");
	gets(s1.name);
	scanf(" %d %f",&s1.roll_no,&s1.mark);
	printf("Name:%s\n Roll number:%d\n, Mark:%f\n",s1.name,s1.roll_no,s1.mark);
	printf("Enter the details of student s2:");
	fflush(stdin);
	gets(s2.name);
	scanf(" %d %f",&s2.roll_no,&s2.mark);
	printf("Name:%s\n Roll number:%d\n, Mark:%f\n",s2.name,s2.roll_no,s2.mark);
	
	
}

