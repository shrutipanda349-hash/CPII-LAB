/*5. Create structure to store details of book. Store and print the details of 5 books 
using pointer.*/
#include<stdio.h>
struct Book
{
    char name[50];
    char author[50];
    int price;
};

int main() {
    struct Book d[5];
    struct Book *ptr = d;
    int i;

    
    printf("Enter the detail of book:\n");
    for (i = 0; i < 5; i++){
        scanf(" %s %s %d", &(ptr + i)->name, &(ptr + i)->author, &(ptr + i)->price);
    }for (i = 0; i < 5; i++){
        printf("Book details is:");
        printf(" Book no.-%d name-%s author-%s price-%d \n",i+1,
           (ptr + i)->name,
           (ptr + i)->author,
           (ptr + i)->price);
    }
}
