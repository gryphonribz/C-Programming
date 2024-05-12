#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    printf("Please enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1; 
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; 
    }

    printf("Result: %d\n", result);

    return 0;
}
