#include <stdio.h>
#include <stdlib.h>

// ---- While -----

// int main()
// {
//     int i = 6;
//     while(i >= 5){
//         printf("Urutan ke %d\n", i);
//     }
//     return 0;
// }


// ---- Do While -----
// int main(){
//     int i = 6;
//     do {
//         printf("Urutan ke %d\n", i);
//         i++;
//     } while (i <= 5);
//     return 0;
// }


int main(){
    int i, sum = 0;
    do{
        printf("Masukkan angka :\n");
        scanf("%i", &i);
        sum += i;
    } while (i != 0);
    printf("sum = %i, sum");
    return 0;
}