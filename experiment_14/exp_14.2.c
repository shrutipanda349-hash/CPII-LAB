//2. Write a program to append data to an existing binary file without overwriting 
//the existing data.
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

    // Open file in append binary mode
    fp = fopen("students.dat", "ab");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input new student data
    printf("Enter student details to append:\n");
    printf("Roll: ");
    scanf("%d", &s.roll);
    printf("Name: ");
    scanf("%s", s.name);
    printf("Marks: ");
    scanf("%f", &s.marks);

    // Write data to file (append)
    fwrite(&s, sizeof(struct Student), 1, fp);

    fclose(fp);

    printf("Record appended successfully.\n");

    // Display all records
    fp = fopen("students.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nAll Student Records:\n");
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("\nRoll: %d\n", s.roll);
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.marks);
    }

    fclose(fp);

    return 0;
}