#include <stdio.h>

void displayEmployee(char name[], int id, char dept[], float salary) {
    printf("\nEmployee Name: %s\n", name);
    printf("Employee ID: %d\n", id);
    printf("Department: %s\n", dept);
    printf("Salary: %.2f\n", salary);
}

int main() {
    char name[50], dept[50];
    int id;
    float salary;

    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter employee ID: ");
    scanf("%d", &id);
    printf("Enter department: ");
    scanf("%s", dept);
    printf("Enter salary: ");
    scanf("%f", &salary);

    displayEmployee(name, id, dept, salary);

    return 0;
}

