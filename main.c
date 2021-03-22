// Hello World!

#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     printf("Hello World!");
//     return 0;
// }

// Drawing cool shape

// int main()
// {
//     printf("     /|\n");
//     printf("    / |\n");
//     printf("   /  |\n");
//     printf("  /   |\n");
//     printf(" /____|\n");
//     return 0;
// }

// ----- Variable & Tipe Data -----

// int main()
// {
//     int umur = 20;
//     char nama1[] = "Budi";
//     char nama2[] = "Andi";
//     float ipk = 3.7532f;
//     double phi = 3.14159265358979323846;
//     printf("%d\n", 8.0/ 5);
//     printf("%f\n", pow(2, 3) ); // Pangkat 2
//     printf("%f\n", sqrt(36) ); // Akar kuadrat
//     printf("%f\n", ceil(36.155928282) ); // Membulatkan ke desimal batas paling tinggi yang bisa dicapai
//     printf("%f\n", floor(36.155928282) ); // Membulatkan ke desimal batas paling rendah yang bisa dicapai 
//     printf("%s berumur %i\n", nama1, umur);
//     printf("%s berumur %i\n", nama2, umur+1);
//     printf("Nilai IPK %s adalah %.3f \n", nama1, ipk); // %.3 Untuk menentukan nilai di belakang koma
//     printf("Nilai phi adalah %.10f \n", phi);
//     printf("%s %s %i\n", nama1, "berumur", umur+1);
//     return 0;
// }

// ----- Working with number -----

/* Built in function for number */
// pow -> Pangkat 3 - printf("%f\n", pow(2, 3) );
// sqrt -> Akar kuadrat - printf("%f\n", sqrt(36) );
// ceil -> Pembulatan ke atas - printf("%f\n", sqrt(36.155928282) );
// floor -> Pembulatan ke bawah - printf("%f\n", sqrt(2, 3) );

// ----- Constant -----

// int main()
// {
//     const int FAV_NUM = 5; // Biasanya variable di tulis dengan huruf besar.
//     printf("%d\n", num);
//     num = 8;
//     printf("%d", num);
// }


// ----- Getting user input -----
/* --- scanf() --- */
// int main()
// {
//     int usia;
//     printf("Masukkan usia anda :");
//     scanf("%d", &usia);
//     printf("Usia anda %d adalah", usia);
//     return 0;
// }

/* --- fgets() --- */
int main()
{
    char nama[10];
    printf("Masukkan nama anda : \n");
    fgets(nama, 10, stdin);
    printf("Nama anda adalah %s", nama);
    return 0;
}



