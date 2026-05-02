//7. Write a program to copy the contents of one structure to another using a 
//function.
#include <stdio.h>
#include <string.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

// Function to copy structure
void copyStructure(struct Student *dest, struct Student *src) {
    dest->roll = src->roll;
    strcpy(dest->name, src->name);
    dest->marks = src->marks;
}

int main() {
    struct Student s1 = {1, "Riya", 85.5};
    struct Student s2;

    // Function call to copy data
    copyStructure(&s2, &s1);

    printf("Copied Structure:\n");
    printf("Roll: %d\n", s2.roll);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}