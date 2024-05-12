#include <stdio.h>

    int main() {
        double num1,num2;

        double sum_one,sum_two,sum_three,sum_four;

        printf("Please enter a number: ");
        scanf("%lf", &num1);

        printf("Please enter another number: ");
        scanf("%lf", &num2);

        sum_one = num1 + num2;
        sum_two = num1 - num2;
        sum_three = num1 * num2;
        sum_four = num1 / num2;

        printf("%lf\n", sum_one);
        printf("%lf\n", sum_two);
        printf("%lf\n", sum_three);
        printf("%lf\n", sum_four);

        return 0;
    }