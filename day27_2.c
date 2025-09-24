#include <stdio.h>

int main() {
    int n = 5;
    int i, j, space;

    for (i = n; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 2; i <= n; i++) { 
        // Print leading spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
       
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
