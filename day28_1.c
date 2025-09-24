#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: \n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime initially
        for (j = 2; j <= i / 2; j++) { // Check for divisibility up to i/2
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;       // No need to check further
            }
        }
        if (isPrime == 1) { // If it's still considered prime
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
