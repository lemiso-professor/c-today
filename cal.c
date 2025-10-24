#include <stdio.h>

int main() {
    double num1, num2, result;   // use double for decimal precision
    char operator;               // will store +, -, *, /

    printf("=== Simple Calculator ===\n");
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input for first number.\n");
        return 1;
    }

    printf("Enter an operator (+, -, *, /): ");
    // note the leading space to skip any leftover newline/whitespace
    if (scanf(" %c", &operator) != 1) {
        printf("Invalid input for operator.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input for second number.\n");
        return 1;
    }

    // perform operation based on user input
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("\nInvalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
