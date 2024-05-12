#include <stdio.h>

int main() {
    int num1, num2;

    int sum_one, sum_two, sum_three, sum_four;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    num2 = 0;

    sum_one = num1 + num2;
    sum_two = num1 - num2;
    sum_three = num1 * num2;

    printf("%d\n", sum_one);
    printf("%d\n", sum_two);
    printf("%d\n", sum_three);

    if (num2 != 0) {
        sum_four = num1 / num2;
        printf("Division by zero is undefined.\n");
    } else {
        printf("%d\n", sum_four);
    }


    return 0;
}
