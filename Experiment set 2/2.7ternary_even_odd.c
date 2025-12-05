#include <stdio.h>

int main() {
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    (N % 2 == 0) ? printf("%d is even.\n", N) : printf("%d is odd.\n", N);

    return 0;
}
