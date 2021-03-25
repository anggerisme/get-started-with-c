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


// int main(){
//     int i, sum = 0;
//     do{
//         printf("Masukkan angka :\n");
//         scanf("%i", &i);
//         sum += i;
//     } while (i != 0);
//     printf("sum = %i, sum");
//     return 0;
// }

// ---- For Loop -----

/* while */

// int main()
// {
//     int i = 1;
//     while(i<=5)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

/* --- for loop ---*/

// int main(){
//     for (int i = 1; i <= 5;i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
    
// }

/*--- Mengambil indeks array menggunakan for loop ---*/

// int main(){
//     int arrays[] = {1, 2, 3, 4, 5, 6};
//     for (int i = 0; i <= 5;i++)
//     {
//         printf("%d\n", arrays[i]);
//     }
//     return 0;
    
// }

// ---- 2D Arrays & Nested Loops -----
int main()
{
    int arrays[3][2] = {{1, 2},
                        {3, 4},
                        {5, 6}};
    int i, j;
    for (i = 0; i < 3 ;i++){
        for (j = 0; j < 2;j++){
            printf("%d", arrays[i][j]);
        }
    }

    return 0;
}