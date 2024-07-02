#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, tries = 0;
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100
    printf("Guess My Number Game\n\n");

    do {
        printf("Enter a guess between 1 and 100: ");
        scanf("%d", &guess);
        tries++;

        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Correct! You got it in %d tries!\n", tries);
        }
    } while (guess != number);

    return 0;
}
