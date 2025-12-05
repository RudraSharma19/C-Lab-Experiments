#include <stdio.h>

int main() {
    char title[30], author[30], publisher[30];
    int isbn, year;
    float price;

    printf("Enter book title: ");
    scanf("%s", title);

    printf("Enter author name: ");
    scanf("%s", author);

    printf("Enter ISBN number: ");
    scanf("%d", &isbn);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter publisher name: ");
    scanf("%s", publisher);

    printf("Enter year of publication: ");
    scanf("%d", &year);

    printf("\nBook Details:\n");
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("ISBN: %d\n", isbn);
    printf("Price: %.2f\n", price);
    printf("Publisher: %s\n", publisher);
    printf("Year of Publication: %d\n", year);

    return 0;
}
