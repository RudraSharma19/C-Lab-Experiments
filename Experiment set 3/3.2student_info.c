#include <stdio.h>

void displayStudent(char name[], int roll, float marks) {
    printf("\nStudent Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Marks: %.2f\n", marks);
}

int main() {
    char name[50];
    int roll;
    float marks;

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks: ");
    scanf("%f", &marks);

    displayStudent(name, roll, marks);

    return 0;
}
