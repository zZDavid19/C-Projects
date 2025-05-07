#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int deposit, dublu, alegere, castig, bet;
    char decision[10];

    printf("Welcome to Faliment Casino! \n");
    printf("Write the amount of money you want to deposit: $");
    scanf("%d", &deposit);

    srand(time(0));

    while (deposit > 0) {
        printf("\nPlace your bet: $");
        scanf("%d", &bet);

        if (bet > deposit) {
            printf("Insufficient funds! Try again\n");
            continue;
        }

        printf("Guess the colour of the next card -> Red or Black?: ");
        scanf("%s", decision);

        if (strcmp(decision, "red") == 0) {
            alegere = 0;
        } else if (strcmp(decision, "black") == 0) {
            alegere = 1;
        } else {
            printf("Invalid color! Your credits have been returned.\n");
            continue;
        }

        int rezultat = rand() % 2;

        printf("Result: %s\n", rezultat == 0 ? "Red" : "Black");

        if (rezultat == alegere) {
            castig = bet * 2;
            printf("You have won $%d!\n", castig);
            deposit = deposit - bet + castig;
        } else {
            printf("You have lost!\n");
            deposit -= bet;
        }

        printf("You have $%d remaining\n", deposit);
    }

    printf("You're out of credits! Try again later!\n");

    return 0;
}
