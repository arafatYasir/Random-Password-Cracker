
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("clear");
    time_t t;
    srand((unsigned)(time(&t)));
    int pin;
    printf("Enter your pin: ");
    scanf("%d", &pin);
    int guess = 0;

    while(guess != pin) {
        guess = rand() % 99999 + 1;
        printf("%d\n", guess);
        if(guess == pin) {
            printf("Your password is: %d\n", guess);
            break;
        }
    }
    return 0;
}