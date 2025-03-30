#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter Your First Number : ");
    if (scanf("%lf", &num1) != 1) {
        printf("Error! Please enter a valid number.\n");
        return 1;
    }

    printf("Enter Your Operator ( + , - , * , /) : ");
    scanf(" %c", &operator);

    if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Error! Please enter a valid operator (+, -, *, /)\n");
        return 1;
    }

    printf("Enter Your Second Number : ");
    if (scanf("%lf", &num2) != 1) {
        printf("Error! Please enter a valid number.\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result : %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result : %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result : %.2lf\n", result);
            break;
        case '/':
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
            break;
    }

    return 0;
}
