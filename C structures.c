/*
AUTHOR:Tiva Jepkosgei 
REG NO: CT101/G/23447/24
24-10-2024
C structures
*/
#include <stdio.h>
    struct book{
        char title[50];
        char author[50];
        int publication_year;
        int ISBN;
        float price;
    }Book;
int main() {
    //inputs
    printf("Enter book name:");
    scanf("%s", &Book.title);
    printf("Enter book author:");
    scanf("%s", &Book.author);
    printf("Enter publication year:");
    scanf("%d", &Book.publication_year);
    printf("Enter ISBN Number:");
    scanf("%d", &Book.ISBN);
    printf("Enter the price:");
    scanf("%f", &Book.price);

//Outputs
printf("\nBook name is: %s \n", Book.title);
printf("Book author is: %s \n", Book.author);
printf("Book publication year is: %d \n", Book.publication_year);
printf("Book ISBN is: %d \n", Book.ISBN);a
printf("Book price is: %f \n", Book.price);

    return 0;
}