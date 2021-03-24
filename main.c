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
// int main()
// {
//     char nama[10];
//     printf("Masukkan nama anda : \n");
//     fgets(nama, 10, stdin);
//     printf("Nama anda adalah %s", nama);
//     return 0;
// }


// ----- Basic calculator -----
// int main()
// {
//     int num1;
//     int num2;
//     printf("Masukkan angka 1:\n");
//     scanf("%d", &num1);
//     printf("Masukkan angka 2:\n");
//     scanf("%d", &num2);
//     printf("Hasilnya adalah %d" ,num1 + num2);
//     return 0;
// }

// int main()
// {
//     double num1;
//     double num2;
//     printf("Masukkan angka 1:\n");
//     scanf("%lf", &num1);
//     printf("Masukkan angka 2:\n");
//     scanf("%lf", &num2);
//     printf("Hasilnya adalah %lf" ,num1 + num2);
//     return 0;
// }

// ----- Arrays -----

// int main() {int number[] = {2, 4, 8, 16, 32, 64};
//     printf("No : %d", number[0]); //2
//     return 0;
// }
/* Reassigning value*/
// int main() {int number[] = {2, 4, 8, 16, 32, 64};
//     number[0] = 10;
//     printf("No : %d", number[0]); //2
//     return 0;
// }

/* Reassigning value di akhir*/
// int main()
// {
//     int number[4];
//     number[0] = 10;
//     number[2] = 12;
//     number[3] = 14;
//     number[4] = 16;
//     number[5] = 19;
//     printf("No : %d & %d & %d & %d & %d", number[0], number[2], number[3], number[4], number[5]); //2
//     return 0;
// }


// ----- Function -----
// int main()
// {
//     sayHi();
//     return 0;
// }

// void sayHi(){
//     printf("Hi");
// }

// int main()
// {
//     halo("Budi",1);
//     halo("Andi",2);
//     halo("Sinta",3);
//     return 0;
// }

// void halo(char nama[], int nomer)
// {
//     printf("Nama %s, No %d\n", nama, nomer);
// }


// ----- Return statement -----
// double pangkat(double angka)
// {
//     double hasil = angka * angka;
//     return hasil;
// }

// int main()
// {
//     printf("Hasilnya : %f", pangkat(2.0));
//     return 0;
// }

/* --- Prototype ---*/

// double pangkat(double angka);

// int main()
// {
//     printf("Hasilnya : %f", pangkat(2.0));
//     return 0;
// }

// double pangkat(double angka)
// {
//     double hasil = angka * angka;
//     return hasil;
// }

// ----- IF Statements -----
/*--- if ---*/
// int main()
// {if(5<10)
//     printf("5 kurang dari 10");
//     return 0;
// }

/* --- if else ---*/
// int main()
// {
//     int angka;
//     printf("Tolong masukkan angka :\n")
//     scanf("%d", &angka);
//     if(angka<40)
//     {
//         printf("Anda millenial!");
        
//     }
//     else
//     {
//         printf("Anda baby boomer!");
//     }
//     return 0;
// }

/* ---if elseif ---*/

// int main()
// {
//     int umur;
//     printf("Tolong masukkan umur :\n");
//     scanf("%d", &umur);
//     if( umur >= 20 && umur <= 40)
//     {
//         printf("Anda millenial!");

//     }
//     else if(umur <=20){
//         printf("Anda generasi alfa!");
//     }
//     else
//     {
//         printf("Anda baby boomer!");
//     }
// return 0;
// }
/* --- unsolved --- */
// int max(int num1, int num2)
// {
//     int result;

//     if(num1 > num2){
        
//         result = printf("%d lebih besar dari %d", num1, num2); 
        
//     }
//     else{
//         // printf("%d lebih kecil dari %d", num1, num2);
//         result = printf("%d lebih besar dari %d", num2, num1);
//         }
//     return result;
// }

// int main()
// {
//     printf( "%d", max(23, 1));
//     return 0;
// }

// ----- Build a calculator -----
// int main()
// {

//     double num1;
//     double num2;
//     char op;

//     printf("Enter a number :\n");
//     scanf("%lf", &num1);
//     printf("Enter operator :\n");
//     scanf(" %c", &op);
//     printf("Enter a number :\n");
//     scanf("%lf", &num2);

//     if(op == '+'){
//         printf("%f", num1 + num2);
//     }
//     else if(op == '-'){
//         printf("%f", num1 - num2);
//     }
//     else if(op == '/'){
//         printf("%f", num1 / num2);
//     }
//     else if(op == '*'){
//         printf("%f", num1 * num2);
//     }
//     return 0;

// }

// ----- Switch Statements -----

// int main()
// {
//     // char ipk = 'A';
//     switch('A'){
//         case 'A':
//             printf("Nilai kamu sangat bagus!");
            
//         case 'B':
//             printf("Nilai kamu bagus");
//             break;
//         case 'C':
//             printf("Nilai kamu cukup");
//             break;
//         default :
//             printf("Nilai yang kamu masukkan salah!");
//         }
//         return 0;
// }

// ----- Struct ------

/* --- membuat variable struct --- */

/* Cara 1*/

// struct Mahasiswa{
//     double ipk;
// } 

// mahasiswa1, 
// mahasiswa2;

// int main()
// {
//     mahasiswa1.ipk = 3.45;
//     mahasiswa2.ipk = 2.75;
//     printf("ipk : %lf\n", mahasiswa1.ipk);
//     printf("ipk : %lf", mahasiswa2.ipk);
// }

/* Cara 2 */

// struct Mahasiswa{
//     double ipk;
// };

// int main()
// {
//     struct Mahasiswa mahasiswa1;
//     struct Mahasiswa mahasiswa2;
//     mahasiswa1.ipk = 3.45;
//     mahasiswa2.ipk = 2.75;
//     printf("ipk : %lf\n", mahasiswa1.ipk);
//     printf("ipk : %lf", mahasiswa2.ipk);
// }

/* --- Mengakses element struct --- */

struct Mahasiswa{
    char nama[50];
    int no1, no2;
}mahasiswa1, mahasiswa2;

int main()
{
    strcpy(mahasiswa1.nama, "Andi");
    mahasiswa1.no1 = 1;
    mahasiswa2.no2 = 2;
    printf("Nama : %s\n No1 : %d", mahasiswa1.nama, mahasiswa1.no1);
}









// struct Mahasiswa{
//     char nama[20];
//     char prodi[20];
//     int usia;
//     double ipk;
// }

// int main(){
//     struct Mahasiswa mahasiswa1;
//     mahasiswa1.nama[] = "Andi";
//     mahasiswa1.prodi[]
// }

