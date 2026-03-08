/*Write a program to define a structure within another structure to store details of 
an employee (name, ID, salary and department details). Store the details of 10 
employees and sort them according to the salary.*/
#include <stdio.h>
#include <string.h>
struct Department
{
    char dept_name[50];
    int dept_id;
};


struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Department dept;
};

int main()
{
    struct Employee emp[10], temp;
    int i, j;

    printf("Enter details of 10 employees:\n");
    for(i = 0; i < 10; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter name: ");
        gets( emp[i].name);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter department name: ");
        gets( emp[i].dept.dept_name);

        printf("Enter department ID: ");
        scanf("%d", &emp[i].dept.dept_id);
    }

    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(emp[i].salary > emp[j].salary)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
    printf("\nEmployees sorted by salary:\n");
    for(i = 0; i < 10; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].id);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Department Name: %s\n", emp[i].dept.dept_name);
        printf("Department ID: %d\n", emp[i].dept.dept_id);
    }

    return 0;
}