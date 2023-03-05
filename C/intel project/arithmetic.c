#include <stdio.h>

int main() {
    char op;
    double a, b, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch(op) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            result = a / b;
            break;

        default:
            printf("Invalid operator!");
            return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
