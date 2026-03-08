/*Write a program to define a structure for a student containing fields for name, 
roll number, and marks. Input the details of 10 students and display the details 
of the student who has secured highest mark.*/
#include <stdio.h>
#include<string.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[10];
    int i, maxIndex = 0;

    printf("Enter details of 10 students:\n");
    for(i = 0; i < 10; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        gets( s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    
    for(i = 1; i < 10; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll Number: %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}