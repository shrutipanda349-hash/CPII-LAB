/*Write a program to store details of multiple employees and count the number of 
employees in a specific department using nested structures. */
#include <stdio.h>
#include <string.h>
struct Department {
    int id;
    char name[50];
};
struct Employee {
    int employee_id;
    char name[100];
    float salary;
    struct Department dept; 
};
int main() {
    int num_employees, i, count = 0;
    char search_dept[50];

    
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    
    struct Employee employees[num_employees];

    
    for (i = 0; i < num_employees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].employee_id);
        printf("Name: ");
        
        scanf(" %s", employees[i].name); 
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Department ID: ");
        scanf("%d", &employees[i].dept.id);
        printf("Department Name: ");
        scanf(" %s", employees[i].dept.name);
    }

    
    printf("\nEnter the name of the department to count employees in: ");
    scanf(" %s", search_dept);

    
    for (i = 0; i < num_employees; i++) {
        
        if (strcmp(employees[i].dept.name, search_dept) == 0) {
            count++;
        }
    }

    
    printf("\nTotal employees in the %s department: %d\n", search_dept, count);

    return 0;
}
