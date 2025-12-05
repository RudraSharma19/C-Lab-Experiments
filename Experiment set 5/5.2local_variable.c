#include <stdio.h>

int globalVar = 10;

void testLocal() {
    int localVar = 5;
    printf("Value of local variable inside function: %d\n", localVar);
}

int main() {
    printf("Value of global variable in main(): %d\n", globalVar);

    testLocal();

    return 0;
}

