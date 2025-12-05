#include <stdio.h>

int globalVar = 10;

void display() {
    printf("Value of global variable inside display(): %d\n", globalVar);
}

void modify() {
    globalVar = 20;
    printf("Value of global variable inside modify(): %d\n", globalVar);
}

int main() {
    printf("Value of global variable in main(): %d\n", globalVar);

    display();
    modify();

    printf("Value of global variable in main() after modify(): %d\n", globalVar);

    return 0;
}

