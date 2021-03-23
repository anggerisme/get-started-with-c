# Hello World!

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World!");
    return 0;
}
```

# Drawing cool shape! ⛰️

```c
int main()
{
    printf("     /|\n");
    printf("    / |\n");
    printf("   /  |\n");
    printf("  /   |\n");
    printf(" /____|\n");
    return 0;
}
```

# The power of variable & printf 🔥

```c
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
}
```

> `$` digunakan sebagai _placeholder_ untuk menaruh variable yang sudah dideklarasikan diawal. `$d` untuk angka dan `$s`.

hasil :

```c
Budi berumur 20
Andi berumur 21
Nilai ipk Budi adalah 3.753
Nilai phi adalah 3.1415926536
Budi berumur 21
```

# Working with number 🔢

```c
int main()
{
    printf("%f", 5+4); // 0.000000
    printf("%d", 5.0+4); // -1717986918

}
```

> Mengapa mengembalikan nilai 0.000000? karena _placeholder_ `%f` hanya berlaku untuk tipe bilangan pecahan. Tapi jika kita tambahkan mis 8.0 * 4 = 40. Dan sebaliknya *placeholder\* `%d` tidak akan berlaku untuk operasi bilangan pecahan.

## Built in function for number in C

```c
int main()
{
    printf("%f\n", pow(2, 3) ); // Pangkat 2
    printf("%f\n", sqrt(36) ); // Akar kuadrat
    printf("%f\n", ceil(36.155928282) ); // Pembulatan ke atas
    printf("%f\n", floor(36.155928282) ); // Pembulatan ke bawah
}

```

# Constant 🚧

```c
int main()
{
    int num = 5;
    printf("%d\n", num);/5
    num = 8;
    printf("%d", num); /8
}
```

> Nilai yang ada pada variable `Num` akan ditimpa dengan nilai terakhir yaitu 8 walaupun sebelumnya sudah mempunyai nilai 5.

Dengan menggunakan const hal seperti ini tidak akan terjadi.

```c
int main()
{
    const int FAV_NUM = 5;// Biasanya variable di tulis dengan huruf besar.
    printf("%d\n", num); // 5
    num = 8;
    printf("%d", num); /8 // error: assignment of read-only variable 'num'
}
```

# Getting user input 🔠

## Scanf()

Meminta input dari user menggunakan function `scanf()`.

### Angka

```c
int main()
{
    int usia;
    printf("Masukkan usia anda :");
    scanf("%d", &usia);
    printf("Usia anda %d adalah", usia)
    return 0;
}
```

### String

```c
int main()
{
    char nama[5];
    printf("Masukkan nama anda : \n");
    scanf("Nama anda adalah %s", nama);
    printf("Nama anda adalah %s", nama);
    return 0;
}
```

> Kita bisa gunakan function `scanf()` untuk memperoleh data dari user, tetapi hanya terbatas pada karakter string pertama. Jika sebuah string terpisahkan dengan spasi maka itu dianggap terpisah.

## fgets

`fgets()` akan mengambil seluruh string yang ada di suatu inputan

```c
int main()
{
    char nama[10];
    printf("Masukkan nama anda : \n");
    fgets(nama, 10, stdin);
    printf("Nama anda adalah %s", nama);
    return 0;
}
```

# Build Simple Calculator 🧮

```c
int main()
{
    int num1;
    int num2;
    printf("Masukkan angka 1:\n");
    scanf("%d", &num1);
    printf("Masukkan angka 2:\n");
    scanf("%d", &num2);
    printf("Hasilnya adalah %d" ,num1 + num2);
    return 0;
}
```

> Hasil akhir `%d` dihasilkan oleh operasi `num1` + `num2`

Tapi ada masalah diatas jika kita gunakan angka pecahan (_float_) misalkan 8.5 + 2 = 10 (seharusnya 10.5) oleh karena itu, kita gunakan variable `double`

```c
int main()
{
    double num1;
    double num2;
    printf("Masukkan angka 1:\n");
    scanf("%lf", &num1);
    printf("Masukkan angka 2:\n");
    scanf("%lf", &num2);
    printf("Hasilnya adalah %lf" ,num1 + num2);
    return 0;
}
```

# Arrays 🅰️

Kumpulan nilai dalam satu variable

```c
int main()
{
    int number[] = {2,4,6,8,10,12,14};
    printf("No : %d", number[]);
    return 0;
}
```

Reassigning value :

```c
int main()
{
    int number[] = {2, 4, 8, 16, 32, 64};
    number[0] = 10;
    printf("No : %d", number[0]); //2
    return 0;
}
```

Reassigning value di akhir

```c
int main()
{
    int number[3];
    number[0] = 10;
    number[2] = 12;
    printf("No : %d", number[0], number[2]); //2
    return 0;
}
```

> Jumlah nilai yang dapat ditambahkan di dalamnya adalah 3+1 dari jumlah yang ditentukan di parameter arrays

# Functions 🌟

Kumpulan perintah yang terdapat di dalam sebuah variable dinamakan function. Function dibuat untuk menjalankan suatu perintah tertentu (spesifik). Perintah ini dapat kita panggil sewaktu waktu tergantung kebutuhan kita. diawali dengan nama dan kurung `()` kemudian diikuti _block code_. Dapat juga disebut _method_.

## main()

Function `main()` akan dijalankan sesaat setelah program dijalankan

```c
int main()
{

}
```

## void()

`Void` Merupakan tipe data function yang ketika ia tidak dapat mengembalikan nilainya sendiri. Untuk mengembalikan nilai yang ada di dalamnya kita harus memanggilnya di dalam function yang lain

```c
int main()
{
    halo();
    return 0;
}
void halo()
{
    printf("Hello world!");
}
```

Kita dapat menyimpan variable di dalam parameter `void` dan memanggilnya di function yang lain dengan menambahkan argumen disana.

```c
int main()
{
    halo("Budi");
    halo("Andi");
    halo("Sinta");
    return 0;
}
void halo(char nama[])
{
    printf("Halo");
}
```

> parameter yang terdapat di `void` terdapat variable `char` nama[] yang argumenya kita masukkan lewat di funtion yang lain berbarengan dengan pemanggilanya.

Kita juga bisa menambahkan lebih dari satu variable di parameter `void`

```c
int main()
{
    halo("Budi",1);
    halo("Andi",2);
    halo("Sinta",3);
    return 0;
}

void halo(char nama[], int nomer)
{
    printf("Nama %s, No %d\n", nama, nomer);
}
```

# Return statments

Return statements mengembalikan nilai dari sebuah function
A return statement terminates execution of the current function and returns control to its caller. A function may have any number of return statements.

If a return statement with an expression is executed, the value of the expression is returned to the caller as the value of the function call expression. If the expression has a type different from the return type of the function in which it appears, the value is converted as if by assignment to an object having the return type of the function.

```c
double pangkat(double angka)
{
    double hasil = angka * angka;
    return hasil;
}

int main()
{
    printf("Hasilnya : %f", pangkat(2.0));
    return 0;
}
```

Prototype : Kita bisa mendeklarasikan nama functionya diatas sebelum dipanggil dan meletakkan valuenya dibawah

```c
double pangkat(double angka) // nama function diatas pemanggilan

int main()
{
    printf("Hasilnya : %f", pangkat(2.0));
    return 0;
}

double pangkat(double angka)
{
    double hasil = angka * angka;
    return hasil;
}
```

# If statements 🔁

## if

```c
int main()
{
    if(5<10)
    printf("5 kurang dari 10");
    return 0;
}
```

## if else

```c
int main()
{
    int angka;
    printf("Tolong masukkan angka :\n");
    scanf("%d", &angka);
    if( angka < 40 )
    {
        printf("Anda millenial!");

    }
    else
    {
        printf("Anda baby boomer!");
    }
return 0;
}
```

## if else-if else

```c
int main()
{
    int umur;
    printf("Tolong masukkan umur :\n");
    scanf("%d", &umur);
    if( umur >= 20 && umur <= 40)
    {
        printf("Anda millenial!");

    }
    else if(umur <=20){
        printf("Anda generasi alfa!");
    }
    else
    {
        printf("Anda baby boomer!");
    }
return 0;
}
```
