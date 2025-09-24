#include <stdio.h>

int main() {
    int num, digit, product = 1, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {   // check odd
            product *= digit;
            found = 1;
        }
        num /= 10;
    }

    if (found)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found, product = 1\n");

    return 0;
}
