#include <stdio.h>

int main() {
    int number = 23;
    int i;

    printf("Multiplication table of numbers %d\n", number);

    for (i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
