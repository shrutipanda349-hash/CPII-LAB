//6. Create a function to calculate the sum of salaries of employees stored in an 
//array of structures. 
#include <stdio.h>

// Define structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Function to calculate total salary
float totalSalary(struct Employee emp[], int n) {
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += emp[i].salary;
    }

    return sum;
}

int main() {
    struct Employee emp[3] = {
        {1, "Amit", 25000},
        {2, "Riya", 30000},
        {3, "John", 28000}
    };

    float total;

    total = totalSalary(emp, 3);

    printf("Total Salary = %.2f\n", total);

    return 0;
}