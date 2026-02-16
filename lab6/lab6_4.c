/*Create a nested structure to store a student’s details (name, roll number, and
address where address is another structure).*/
 
#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int roll_no;
	struct address
	{
		char state[100];
		char dist[60];
		char city[30];
	   int pin;
	};
	struct address add;
};
main()
{
	struct student s1,s2;
	printf("Enter the details of student s1:");
	gets(s1.name);
	scanf("%d",&s1.roll_no);
	gets(s1.add.state);
	gets(s1.add.dist);
	gets(s1.add.city);
	scanf(" %d",&s1.add.pin);
	printf("Name:%s\n Roll number:%d\n Address:state:%s\n dist: %s\n city: %s\n pin: %d\n",s1.name,s1.roll_no,s1.add.state,s1.add.dist,s1.add.city,s1.add.pin);
	printf("Enter the details of student s2:");
	fflush(stdin);
	gets(s2.name);
	scanf("%d",&s2.roll_no);
	gets(s2.add.state);
	gets(s2.add.dist);
	gets(s2.add.city);
	scanf("  %d",&s2.add.pin);
	printf("Name:%s\n Roll number:%d\n Address:state:%s\n dist: %s\n city: %s\n pin: %d\n",s2.name,s2.roll_no,s2.add.state,s2.add.dist,s2.add.city,s2.add.pin);
	
}

