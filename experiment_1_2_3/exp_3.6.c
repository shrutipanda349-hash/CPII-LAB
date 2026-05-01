/*6. Demonstrate: How to use typedef with structures to simplify code readability?*/
#include <stdio.h>


typedef struct {
    int id;
    char name[50];
} Student;

int main() {
    Student s1;   

    s1.id = 1;
    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("ID: %d\nName: %s", s1.id, s1.name);

    return 0;
}
