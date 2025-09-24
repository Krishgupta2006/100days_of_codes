#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, D, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Two distinct real roots: %.2f and %.2f\n", root1, root2);
    } 
    else if (D == 0) {
        root1 = root2 = -b / (2*a);
        printf("Two equal real roots: %.2f and %.2f\n", root1, root2);
    } 
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Two complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
