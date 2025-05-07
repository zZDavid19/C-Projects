#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int deposit, bet, x, castig, ramas;



printf("Write the amount of money you want to deposit: ");
scanf("%d", &deposit);

srand(time(0));

while (deposit > 0){
printf("\nPlace your bet :");
scanf("%d", &bet);
if(bet > deposit){
    printf("Insuficient funds! Try again");
    printf("\nPlace your bet :");
    scanf("%d", &bet);
}

int numar = rand() % 10 + 1;

printf("Guess the number 1-10 :");
scanf("%d", &x);

if(x == numar){
    castig = bet*10;
    printf("You won %d lei \n", castig);
    deposit = deposit + castig - bet;
}
else{
    printf("You lost! \n");
    deposit = deposit - bet;
}
printf("The number was: %d\n", numar);
 printf("You have %d remaining: ", deposit);

}
printf("You re out of money! ");


return 0;
}
