//3. Write a program to search for a particular record (e.g., a student's details) in a 
//binary file and display it
#include <stdio.h>

// Define structure
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    int searchRoll, found = 0;

    // Open file in read binary mode
    fp = fopen("students.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input roll number to search
    printf("Enter roll number to search: ");
    scanf("%d", &searchRoll);

    // Search record
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        if (s.roll == searchRoll) {
            printf("\nRecord Found:\n");
            printf("Roll: %d\n", s.roll);
            printf("Name: %s\n", s.name);
            printf("Marks: %.2f\n", s.marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Record not found.\n");
    }

    fclose(fp);

    return 0;
}