#include <stdio.h>

    int main() {
        int x;
        int y;

        x = 1;
        y = x;
        x = 2;

        printf("%d", y);

        return 0;
    }