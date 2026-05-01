/*Write a program to define a structure for a car (make, model, and year) and use 
nested structures to include the owner's details.*/
#include <stdio.h>
#include <string.h>


struct Owner {
    char name[50];
    char licenseID[20];
};


struct Car {
    char make[30];
    char model[30];
    int year;
    struct Owner ownerDetails; 
};

int main() {
    
    struct Car myCar;

    
    printf("Enter Car Make: ");
    scanf("%s", myCar.make);
    printf("Enter Car Model: ");
    scanf("%s", myCar.model);
    printf("Enter Car Year: ");
    scanf("%d", &myCar.year);

    
    printf("Enter Owner Name: ");
    scanf(" %[^\n]s", myCar.ownerDetails.name); 
    scanf("%s", myCar.ownerDetails.licenseID);

   
    printf("\n--- Car and Owner Details ---\n");
    printf("Car: %d %s %s\n", myCar.year, myCar.make, myCar.model);
    printf("Owner: %s\n", myCar.ownerDetails.name);
    printf("License ID: %s\n", myCar.ownerDetails.licenseID);

    return 0;
}
