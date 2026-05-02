//1. Write a program to create a binary file and store the details of 5 students (name,
//roll number, and marks) and display them on the screen. 
#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    FILE *fp;

    // Open file in write binary mode
    fp = fopen("students.dat", "wb");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input student details
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Write data to binary file
    fwrite(s, sizeof(struct Student), 5, fp);
    fclose(fp);

    // Open file in read binary mode
    fp = fopen("students.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read data from file
    fread(s, sizeof(struct Student), 5, fp);
    fclose(fp);

    // Display data
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nRoll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}