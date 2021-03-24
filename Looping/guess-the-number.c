#include <stdio.h>
#include <stdlib.h>

///////// Build the guess my number game! #1 //////////

// int main()
// {
//     int guess;
//     int secretNumber = 5;
//     while(guess != secretNumber)
//     {
//         printf("Silahkan tebak angka :\n");
//         scanf("%d", &guess);

//     }
//     printf("Anda benar! Angkanya adalah %d", secretNumber);
//     return 0;
// }

///////// Build the guess my number game! #2 //////////
int main()
{
    int guess;
    int secretNumber = 5;
    int guessLimit = 3;
    int guessCount = 0;
    int outOfGuess = 0;
    while(guess != secretNumber && outOfGuess == 0)
    {
        if (guessCount < guessLimit){
            printf("Silahkan tebak angka :\n");
            scanf("%d", &guess);
            guessCount++;
        }
        else {
            outOfGuess = 1; // Isikan outOfGuess dengan 1 untuk menyatakan salah
        }

    }
    if (outOfGuess == 1){
        printf("Anda kalah!");
    }
    else {
        printf("Anda benar!");
    }

    return 0;
}