#include <stdio.h>

int main() {
    int num, sum = 0, temp;

    printf("Check Armstrong Number:->>");
	printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
