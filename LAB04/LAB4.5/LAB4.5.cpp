#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess;
    int count = 0;

    srand(time(NULL));

    secret = rand() % 100 + 1;

    printf("---===--- Number guessing game ---===---\n");
    printf("I've already randomly selected a number. (1 - 100)\n");

    do {
        printf("Please guess the number: ");
        scanf("%d", &guess);
        count++;

        if (guess > secret) {
            printf("Too much!\n");
        }
        else if (guess < secret) {
            printf("Too little!\n");
        }
        else {
            printf("Good job !!!\n");
            printf("You all guessed. %d ?????\n", count);
        }
    } while (guess != secret);

    return 0;
}
