/*Write a C program that uses an enumeration to implement a menu-driven 
application. */
#include<stdio.h>

enum Menu {
    ADD = 1,
    SUB,
    MUL,
    DIV,
    EXIT
};

int main() {
    int choice;
    float a, b, result;
    

     
        // Display menu
        printf("\n===== MENU =====\n");
        printf("1. Add\n");
        printf("2. Sub\n");
        printf("3. Mul\n");
        printf("4. Div\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case ADD:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case SUB:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case MUL:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case DIV:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Error! Division by zero.\n");
                break;

            case EXIT:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    

    return 0;
}