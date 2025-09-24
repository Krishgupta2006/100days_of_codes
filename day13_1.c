#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error: Division by zero not allowed\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error: Modulus by zero not allowed\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
