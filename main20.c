#include <stdio.h>

    int main() {
        int num_one, num_two;
    
        printf("Please Enter a Number: ");
        scanf("%d", &num_one);
    
        printf("Please Enter Another Number: ");
        scanf("%d", &num_two);
    
        int value_one = num_one + num_two;
        int value_two = num_one - num_two;
        int value_three = num_one * num_two;
        int value_four = num_one / num_two;
    
        char sign_one = '+';
        char sign_two = '-';
        char sign_three = '*';
        char sign_four = '/';
    
        printf("%d %c %d = %d\n", num_one, sign_one, num_two, value_one);
        printf("%d %c %d = %d\n", num_one, sign_two, num_two, value_two);
        printf("%d %c %d = %d\n", num_one, sign_three, num_two, value_three);
        printf("%d %c %d = %d\n", num_one, sign_four, num_two, value_four);
    
        return 0;
    }
    