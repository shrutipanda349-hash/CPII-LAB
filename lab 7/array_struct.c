//How can you initialize an array of structures? Show an example.//
#include <stdio.h>


struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    
    struct Student s[3] = {
        {1, "Rahul", 85.5},
        {2, "Anita", 90.0},
        {3, "Ravi", 78.5}
    };

    
    for(int i = 0; i < 3; i++)
    {
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}