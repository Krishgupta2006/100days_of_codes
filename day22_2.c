#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;

        if (i == 1) {
            sum += 1;  
            printf("1");
        } else {
            sum += (float)numerator / denominator;
            printf(" + %d/%d", numerator, denominator);
        }
    }

    printf("\nSum of series up to %d terms = %.4f\n", n, sum);

    return 0;
}
