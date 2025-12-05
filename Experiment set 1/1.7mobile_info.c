#include <stdio.h>

int main() {
    char brand[20], model[20], color[20];
    int serialNumber, batteryCapacity;
    float price;

    printf("Enter brand name: ");
    scanf("%s", brand);

    printf("Enter model name: ");
    scanf("%s", model);

    printf("Enter serial number: ");
    scanf("%d", &serialNumber);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter color: ");
    scanf("%s", color);

    printf("Enter battery capacity (mAh): ");
    scanf("%d", &batteryCapacity);

    printf("\nMobile Phone Details:\n");
    printf("Brand: %s\n", brand);
    printf("Model: %s\n", model);
    printf("Serial Number: %d\n", serialNumber);
    printf("Price: %.2f\n", price);
    printf("Color: %s\n", color);
    printf("Battery Capacity: %d mAh\n", batteryCapacity);

    return 0;
}
