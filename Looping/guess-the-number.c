#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guess;
    int secretNumber = 5;
    while(guess != secretNumber)
    {
        printf("Silahkan tebak angka :\n");
        scanf("%d", &guess);

    }
    printf("Anda benar! Angkanya adalah %d", secretNumber);
    return 0;
}