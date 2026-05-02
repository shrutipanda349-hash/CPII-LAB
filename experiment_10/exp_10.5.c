//5. Write a program to compare two structures using a function.//
#include <stdio.h>
#include <string.h>

// Define structure
struct Student {
    int roll;
    char name[50];
};

// Function to compare two structures
int compareStudents(struct Student s1, struct Student s2) {
    if (s1.roll == s2.roll && strcmp(s1.name, s2.name) == 0) {
        return 1;  // equal
    }
    return 0;  
}

int main() {
    struct Student s1 = {1, "Riya"};
    struct Student s2 = {1, "Riya"};

    if (compareStudents(s1, s2))
        printf("Structures are equal\n");
    else
        printf("Structures are not equal\n");

    return 0;
}