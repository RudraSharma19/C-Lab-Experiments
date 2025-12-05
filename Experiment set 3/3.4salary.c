#include <stdio.h>

float calculateSalary(float basic, char cityType) {
    float hra, da, totalSalary;

    if (cityType == 'M' || cityType == 'm') {
        hra = 0.15 * basic;
    } else {
        hra = 0.10 * basic;
    }

    da = 0.05 * basic;

    totalSalary = basic + hra + da;
    return totalSalary;
}

int main() {
    float basicSalary, monthlySalary;
    char cityType;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    printf("Enter city type (M for metro, N for non-metro): ");
    scanf(" %c", &cityType);

    monthlySalary = calculateSalary(basicSalary, cityType);

    printf("Monthly Salary: %.2f\n", monthlySalary);

    return 0;
}

