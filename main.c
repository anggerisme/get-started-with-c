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

// Variable & Tipe Data

int main()
{
    int umur = 20;
    char nama1[] = "Budi";
    char nama2[] = "Andi";
    float ipk = 3.7532f;
    double phi = 3.14159265358979323846;
    printf("%s berumur %i\n", nama1, umur);
    printf("%s berumur %i\n", nama2, umur+1);
    printf("Nilai ipk %s adalah %.3f \n", nama1, ipk); // %.3 Untuk menentukan nilai di belakang koma
    printf("Nilai phi adalah %.10f \n", phi);
    printf("%s %s %i\n", nama1, "berumur", umur+1);
    return 0;
}

// Tipe Data

// int main()
// {
//     float ipk = 3.14f;
//     printf("Nilai ipk %f ")
// }

// Float : hanya untuk angka desimal berukuran kecil. Tipe data float tidak dapat menyimpan data pembagian yang nilai dibelakang koma tidak habis (tak berhingga) seperti 22/7