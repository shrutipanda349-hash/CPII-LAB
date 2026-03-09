/*Write a program to define a structure for a book with title, author, and price. 
Input details for 10 books and display them.*/
#include<stdio.h>
#include<string.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[10];
    int i;
    printf("Enter details of 10 books:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Book %d\n", i + 1);

        printf("Enter title: ");
        gets(b[i].title);
        fflush(stdin);

        printf("Enter author: ");
        gets( b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);
        fflush(stdin);
    }

    
    printf("Details of the books:\n");
    for(i = 0; i < 10; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Title  : %s\n", b[i].title);
        printf("Author : %s\n", b[i].author);
        printf("Price  : %.2f\n", b[i].price);
    }

    return 0;

}
