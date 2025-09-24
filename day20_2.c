#include <stdio.h>

int main() {
    long long binary, complement = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;      // extract last bit
        if (digit == 0)
            complement += 1 * place;
        else
            complement += 0 * place;

        place *= 10;
        binary /= 10;
    }

    printf("1's Complement = %lld\n", complement);

    return 0;
}
