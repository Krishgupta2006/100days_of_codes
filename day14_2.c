#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long for large values

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i += 2) {
        product *= i;   // multiply only even numbers
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    return 0;
}
