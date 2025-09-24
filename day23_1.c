#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
        if (i == 1)
            printf("1");
        else
            printf(" + 1/%d", i);
    }

    printf("\nSum of series up to %d terms = %.4f\n", n, sum);

    return 0;
}
