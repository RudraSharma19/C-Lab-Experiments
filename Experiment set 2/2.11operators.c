#include <stdio.h>

int main() {
    int choice1, choice2;
    int a, b;

    printf("Select Operator Type:\n");
    printf("1. Relational\n2. Logical\n3. Increment/Decrement\n");
    printf("Enter your choice: ");
    scanf("%d", &choice1);

    switch(choice1) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Select Relational Operator:\n1. ==  2. !=  3. >  4. <\n");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1: printf("Result: %d\n", a == b); break;
                case 2: printf("Result: %d\n", a != b); break;
                case 3: printf("Result: %d\n", a > b); break;
                case 4: printf("Result: %d\n", a < b); break;
                default: printf("Invalid choice!\n");
            }
            break;

        case 2:
            printf("Enter two numbers (0=false, non-zero=true): ");
            scanf("%d %d", &a, &b);
            printf("Select Logical Operator:\n1. &&  2. ||\n");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1: printf("Result: %d\n", a && b); break;
                case 2: printf("Result: %d\n", a || b); break;
                default: printf("Invalid choice!\n");
            }
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("Select Operation:\n1. Pre-increment  2. Post-increment  3. Pre-decrement  4. Post-decrement\n");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1: ++a; break;
                case 2: a++; break;
                case 3: --a; break;
                case 4: a--; break;
                default: printf("Invalid choice!\n");
            }
            printf("Result: %d\n", a);
            break;

        default:
            printf("Invalid operator type!\n");
    }

    return 0;
}

