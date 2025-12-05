#include <stdio.h>

int main() {
    char name[20], manufacturer[20], category[20];
    int id, quantity;
    float price;

    printf("Enter product name: ");
    scanf("%s", name);

    printf("Enter product ID: ");
    scanf("%d", &id);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter manufacturer: ");
    scanf("%s", manufacturer);

    printf("Enter category: ");
    scanf("%s", category);

    
    printf("\nProduct Details:-\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);
    printf("Manufacturer: %s\n", manufacturer);
    printf("Category: %s\n", category);

    return 0;
}
