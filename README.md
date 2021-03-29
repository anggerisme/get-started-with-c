# Table of content

<details>
    <summary> Click to expand! </summary>

- [Table of content](#table-of-content)
- [Hello World! 👋](#hello-world-)
  - [Drawing cool shape! ⛰️](#drawing-cool-shape-️)
- [Data types 📦](#data-types-)
  - [Basic data type](#basic-data-type)
    - [Table Tipe Data Integer](#table-tipe-data-integer)
      - [Keterangan](#keterangan)
    - [Sizeof operator](#sizeof-operator)
- [Variable 🔖](#variable-)
  - [Variable declaration dan definition](#variable-declaration-dan-definition)
  - [Perbedaan declaration dan definition](#perbedaan-declaration-dan-definition)
  - [Variable initialization](#variable-initialization)
  - [Penulisan nama variable](#penulisan-nama-variable)
  - [Variable scopes](#variable-scopes)
    - [Jenis jenis scope](#jenis-jenis-scope)
      - [Local scope](#local-scope)
      - [Global scope](#global-scope)
- [Storage classes in C 📦](#storage-classes-in-c-)
  - [Syntax](#syntax)
  - [Types of Storage](#types-of-storage)
- [Printf](#printf)
- [Working with number 🔢](#working-with-number-)
  - [Built in function for number in C](#built-in-function-for-number-in-c)
- [Constant 🚧](#constant-)
- [Getting user input 🔠](#getting-user-input-)
  - [Scanf()](#scanf)
    - [Angka](#angka)
    - [String](#string)
  - [fgets](#fgets)
- [Build Simple Calculator 🧮](#build-simple-calculator-)
- [Arrays 🅰️](#arrays-️)
- [Functions 🌟](#functions-)
  - [main()](#main)
  - [void()](#void)
- [Return statments](#return-statments)
- [If statements 🔁](#if-statements-)
  - [if](#if)
  - [if else](#if-else)
  - [if else-if else](#if-else-if-else)
- [Build a Calculator 2 🧮](#build-a-calculator-2-)
  - [Create variable to store input from user](#create-variable-to-store-input-from-user)
  - [Getting input from user](#getting-input-from-user)
  - [Conditional statement](#conditional-statement)
- [Switch Statements 🔁](#switch-statements-)
  - [Ketentuan](#ketentuan)
  - [Penulisan syntax](#penulisan-syntax)
- [Struct 📰](#struct-)
  - [Deklarasi pada struct](#deklarasi-pada-struct)
  - [Pembuatan variable struct](#pembuatan-variable-struct)
    - [Cara 1](#cara-1)
    - [Cara 2](#cara-2)
  - [Cara Mengakses element struct](#cara-mengakses-element-struct)
- [looping 🔁](#looping-)
  - [While loop](#while-loop)
  - [Do while](#do-while)
  - [Build the guess my number game! #1 🃏](#build-the-guess-my-number-game-1-)
    - [Solusi](#solusi)
      - [1. Mendefinisikan variable untuk menampung nilai `guess` dan `secretNumber`.](#1-mendefinisikan-variable-untuk-menampung-nilai-guess-dan-secretnumber)
      - [2. Membuat pengkondisian while (guess!= secretNumber)](#2-membuat-pengkondisian-while-guess-secretnumber)
  - [Build the guess my number game! #2 🃏](#build-the-guess-my-number-game-2-)
    - [Solusi](#solusi-1)
      - [Membuat variable untuk fitur baru](#membuat-variable-untuk-fitur-baru)
      - [Menentukan kondisi menggunakan if untuk menghitung jumlah tebakan](#menentukan-kondisi-menggunakan-if-untuk-menghitung-jumlah-tebakan)
      - [Menambahkan 2 kondisi di `while` yaitu guess != secretNumber && outOfGuess == 1](#menambahkan-2-kondisi-di-while-yaitu-guess--secretnumber--outofguess--1)
      - [Menambahkan kondisi jika `outOfGuess` == 1 yang berarti kalah, dan selain itu (outOfGuess == 0) maka menang](#menambahkan-kondisi-jika-outofguess--1-yang-berarti-kalah-dan-selain-itu-outofguess--0-maka-menang)
      - [Final Code](#final-code)
  - [For Loop](#for-loop)
    - [Indexing arrays using for loop](#indexing-arrays-using-for-loop)
  - [2D Arrays & Nested Loops 🐣](#2d-arrays--nested-loops-)
- [Memory Addressing 💾](#memory-addressing-)
  - [Menampilkan lokasi memory](#menampilkan-lokasi-memory)
- [Pointer ➡️](#pointer-️)
  - [Syntax](#syntax-1)
  - [Deferencing Pointers 🏹](#deferencing-pointers-)

</details>

# Hello World! 👋

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World!");
    return 0;
}
```

## Drawing cool shape! ⛰️

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

# Data types 📦

Deklarasi variable di C tidak terlepas dari jenis/tipe data seperti apa yang akan di isikan ke dalamnya. Tipe data di C dapat dikelompokkan menjadi 4 seperti di bawah ini

| Tipe Data             | Jenis                            | Keterangan                                                                                          |
| --------------------- | -------------------------------- | --------------------------------------------------------------------------------------------------- |
| Basic type            | int, char, float, double         | Merupakan tipe data aritmatika seperti integer dan float                                            |
| Enumeration data type | enum                             | Tipe data enum digunakan untuk mengisikan nama dari variable constant integer yang berbentuk daftar |
| Derived data type     | array, pointer, structure, union | Tipe data turunan                                                                                   |
| Void data type        | void                             | Tipe data yang mengindikasikan tidak ada value yang tersedia                                        |

## Basic data type

### Table Tipe Data Integer

| Tipe Data                   | Memory                       | Rentang                                              | Format specifier |
| --------------------------- | ---------------------------- | ---------------------------------------------------- | ---------------- |
| **char**                    | 1 byte                       | -128 to 127 or 0 to 255                              | `%c`             |
| Unsigned char               | 1 byte                       | 0 t0 255                                             | `%c`             |
| signed char                 | 1 byte                       | -128 to 127                                          | `%c`             |
| **int** or signed int       | 2 or 4 byte                  | -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647 | `%d`             |
| unsigned int                | 2 or 4 bytes                 | 0 to 65,535 or 0 to 4,294,967,295                    | `%i`             |
| signed **short**            | 2 byte                       | -32,768 to 32,767                                    | `%hd`            |
| unsigned short              | 2 byte                       | 0 to 65,535                                          | `%hu`            |
| **long** int / sig long int | 8 byte or 4 byte (32 bit OS) | -9223372036854775808 to 9223372036854775807          | `%ld`            |
| unsigned long               | 8 bytes                      | 0 to 18446744073709551615                            | `%lu`            |

#### Keterangan

Signed adalah penanda bahwa suatu tipe data **dapat menampung nilai negative** tapi mempunyai rentang **nilai yang kecil** pada bilangan positifnya
Unsigned sebaliknya **tidak dapat menampung nilai negative** tapi mempunyai rentang nilai yang **lebih besar** pada bilangan positifnya.

1. Char : Hanya menampung 1 karakter saja bisa angka bisa huruf, karena itulah char termasuk ke dalam tipe data integer.
2. Short : Cukup ditulis `short` saja, C akan menganggap bahwa `short` yang dimaksud adalah `short int`.
3. long : Juga termasuk `long` cukup ditulis long saja
4. long long : cukup ditulis `long long`

### Sizeof operator

`sizeof` digunakan untuk mengetahui ukuran byte dari data type variable. Output yang dihasilkan akan berbeda dari masing masing komputer tergantung dari beberapa compiler.

```c
int main()
{
    printf("C : %d\n",sizeof(char)); // 1
    printf("C : %d\n",sizeof(short)); // 2
    printf("C : %d\n",sizeof(int)); // 4
    printf("C : %d",sizeof(long));  // 8

    return 0;
}
```

# Variable 🔖

Variable digunakn sebagai tempat untuk menampung sebuah nilai. Di dalam memory komputer, yang disimpan bukanlah nama variablenya tetapi nilai dari variable itu sendiri. jadi komputer akan mengakses nilai dari variable tersebut dengan menggunakan alamat memory. Nama variable itu sendiri tidak disimpan di dalam memory.

## Variable declaration dan definition

Variable _definition_ (atau kadang sering disebut _declaration_ ) tidak lain dan tidak bukan adalah memberitahu komputer bahwa kita ingin memesan sebuah memory untuk program kita. Untuk mendefinisikan variable kita perlu mendefinisikan tipe datanya kemudian diikuti dengan nama variable. Pengisian nilai variable (inisialisasi) tidak perlu dilakukan di awal.

```c
int a; // tipe data : int nama variable : a;
char b = 'A'; // tipe data : char nama variable : b; dengan nilai : A
```

## Perbedaan declaration dan definition

Variable di **definsikan** (_definition_)ketika compiler men-_generate_ instruksi untuk mengalokasikan sejumlah memory untuk variable. Sedangkan deklarasi (_declaration_) adalah saat kita memberi tahu compiler bahwa ada variable yang baru saja dibuat diikuti tipe data tertentu. Compiler tidak menghasilkan instruksi untuk menghasilkan instruksi mengalokasikan sejumlah memory pada saat itu. Variable definition juga termasuk deklarasi, tetapi tidak semua variable declaration adalah definition.

## Variable initialization

Inisialization adalah mengisikan sejumlah nilai ke dalam variable. Nilai yang dimasukkan haruslah sama dengan tipe data yang sudah dideklarasikan sebelumnya.

```c
char namaSaya[] = "Andi";
printf("%s", namaSaya);
```

## Penulisan nama variable

1. Jangan sampai melebihi 30 karakter, terkadang beberapa compiler tidak mensupport itu
2. Jika nama variable lebih dari 2 kata maka gunakan huruf besar untuk kata berikutnya (tetap digabung), bisa juga menggunakan digit, underscore.
3. Tidak boleh menggunakan reserved keyword

## Variable scopes

Variable memiliki scope atau ruang lingkup yang memiliki aksesibilitas tergantung dari penempatanya di dalam program atau function. Contoh variable hanya dapat berlaku disuatu function tertentu (_locally_) atau juga bisa suatu variable dapat berlaku/ dapat diakses oleh seluruh program (_globally_).

### Jenis jenis scope

#### Local scope

Variable local ada saat function dijalankan. Ketika function telah dieksekusi variable lokal tidak berlaku lagi (_memory reclaimed_). Jadi variable lokal datang dan pergi selama program berjalan atau selama sebuah function dijalankan. Variable lokal tidak permanen di dalam memory komputer.

#### Global scope

Scope - Global variable dapat diakses oleh seluruh program di mana saja. Bahkan bisa mengakses variable di file yang berbeda. Semua variable global yang belum diinisialisasi memiliki nilai 0 sebagai nilai default. Variable global akan berlaku sampai program selesei dijalankan.

# Storage classes in C 📦

Bertujuan untuk memberitahu compiler dimana akan menyimpan variable, Bagaimana menyimpan variable, Scope variable, Visibilitas dari variable atau function, _life-time_ dari variable.

## Syntax

storage_specifier_data_type variable_name;

## Types of Storage

# Printf

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

# Build a Calculator 2 🧮

## Create variable to store input from user

```c
double num1;
double num2;
char op;
```

## Getting input from user

```c
printf("Enter a number :\n");
scanf("%lf", &num1);
printf("Enter operator :\n");
scanf(" %c", &op);
printf("Enter a number :\n");
scanf("%lf", &num2);
```

> Format specifier `%c` harus diberikan spasi di awalnya jika tidak maka akan error

## Conditional statement

```c
if(op == '+'){
    printf("%f", num1 + num2);
}
else if(op == '-'){
    printf("%f", num1 - num2);
}
else if(op == '/'){
    printf("%f", num1 / num2);
}
else if(op == '*'){
    printf("%f", num1 * num2);
}
```

Source code :

```c
int main()
{

    double num1;
    double num2;
    char op;

    printf("Enter a number :\n");
    scanf("%lf", &num1);
    printf("Enter operator :\n");
    scanf(" %c", &op);
    printf("Enter a number :\n");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    }
    else if(op == '-'){
        printf("%f", num1 - num2);
    }
    else if(op == '/'){
        printf("%f", num1 / num2);
    }
    else if(op == '*'){
        printf("%f", num1 * num2);
    }
    return 0;

}
```

# Switch Statements 🔁

Switch case statement digunakan untuk mengecek nilai dari suatu variable apakah sama dengan case yang ada di dalam `switch`

## Ketentuan

1. Ekspressi yang berada di dalam switch harus memuat nilai yang sifatnya konstant. Tidak boleh memakai kondisional.

```c
switch(1+2+3);
switch(1*2/3);
```

2. Nilai default pada switch bisa tidak ditulis. fungsinya sama seperti `else` pada if

3. `Break` digunakan untuk menghentikan proses pembacaan kode sesaat setelah suatu ekspressi terpenuhi (_match_) di `case`nya. Penulisan `break` bersifat opsional yang artinya tanpa ditulispun program akan berjalan dengan normal.

```c
switch (2+3){
    case 5 : ("Jawabanya adalah 5!");
    break; // Proses pembacaan kode akan berhenti di case 5
    case 6 : ("Jawabanya adalah 6!");

}
```

jika kita tidak menggunakan `break` hasilnya akan seperti ini :

```c
switch (2+3){
    case 5 : ("Jawabanya adalah 5!");
    case 6 : ("Jawabanya adalah 6!");

}
```

> Jawabanya adalah 5!Jawabanya adalah 6!.

4. _Nesting_ di switch statement bisa dilakukan walaupun tidak disarankan karena akan membuat code susah dibaca.

## Penulisan syntax

```c
int main()
{
    char ipk = 'A';
    switch(ipk){
        case 'A':
            printf("Nilai kamu sangat bagus!");
            break;
        case 'B':
            printf("Nilai kamu bagus");
            break;
        case 'C':
            printf("Nilai kamu cukup");
            break;
        default :
            printf("Nilai yang kamu masukkan salah!");
        }
        return 0;
}

```

Bisa ditulis tanpa membutuhkan nama variable, tetapi langsung ekspresi/nilainya

```c
int main()
{
    switch('A'){
        case 'A':
            printf("Nilai kamu sangat bagus!");
            break;
}

```

# Struct 📰

Merupakan kumpulan dari berbagai tipe data (int, char, double, dll) yang disimpan dalam suatu struktur data baru `Struct`. `Struct` dapat digunakan untuk membuat banyak salinan yang datanya merujuk pada struct utama (parent)

## Deklarasi pada struct

Pengisian nilai tidak boleh dilakukan di awal deklarasi, karena sesaat `struct` baru dibuat maka belum ada memory yang dialokasikan kepadanya.

```c
struct Mahasiswa{
    char nama[20] = "Andi"; // Compiler error : cannot intialize members here
}
```

## Pembuatan variable struct

Dalam membuat salinan struct yang baru ada 2 cara penulisan yang bisa digunakan

### Cara 1

Menuliskan nama structnya langsung setelah _block code_ {} struct parentnya. Ini akan menjadikan salinan `struct` tersebut menjadi global. Karena terletak diluar dari _code block_ apapun.

```c
struct Mahasiswa{
    double ipk;
} mahasiswa1, mahasiswa2; // Global variable

int main()
{
    mahasiswa1.ipk = 3.45;
    mahasiswa2.ipk = 2.75;
    printf("ipk : %lf\n", mahasiswa1.ipk);
    printf("ipk : %lf", mahasiswa2.ipk);
}
```

### Cara 2

```c
struct Mahasiswa{
    double ipk;
};

int main()
{
    struct Mahasiswa mahasiswa1;
    struct Mahasiswa mahasiswa2;
    mahasiswa1.ipk = 3.45;
    mahasiswa2.ipk = 2.75;
    printf("ipk : %lf\n", mahasiswa1.ipk);
    printf("ipk : %lf", mahasiswa2.ipk);
}
```

Catatan : Untuk penulisan tipe data string kita harus gunakan function `strcopy()` karena pada dasarnya string yang kita simpan di dalam tipe data `char` adalah kumpulan karakter yang berarti itu arrays.

```c
struct Mahasiswa{
    char nama[50];

} mahasiswa1, mahasiswa2;

int main()
{
    strcpy(mahasiswa1.nama, "Andi");

}

```

## Cara Mengakses element struct

Untuk mengakses element yang berada disuatu `struct` kita dapat menggunakan dot (.) operator.

```c
struct Mahasiswa{

    int no1, no2;
} mahasiswa1, mahasiswa2;


int main()
{
    mahasiswa1.no1 = 1;
    mahasiswa2.no2 = 2;
    printf("no1 : %d, no2 : %d\n", mahasiswa1.no1, mahasiswa2.no2);
}
```

# looping 🔁

## While loop

```c
int main()
{
    int i = 1;
    while(i >= 5){
        printf("Urutan ke %d", i);
        i = i + 1;
    }
    return 0;
}
```

> Selama `i` _kurang dari/sama dengan_ 5 maka perulangan akan terus berlanjut. Kemudian `while` akan menampilkan perintah pertamanya, dan dibagian _increamentnya_ nilai awal tadi `i` akan di tambahkan 1 (i = i + 1 / i++) setiap perulangan berlangsung sampai batas yang telah ditetapkan yaitu <=5.

## Do while

Perulangan dilakukan sekali kemudian dilanjutkan dengan mengevaluasi ekspresi/kondisi dari while

```c
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
```

## Build the guess my number game! #1 🃏

Kita akan membuat game tebak angka dengan menggunakan konsep looping.

### Solusi

#### 1. Mendefinisikan variable untuk menampung nilai `guess` dan `secretNumber`.

```c
int guess;
int secretNumber  = 5; // bisa berapapun
```

#### 2. Membuat pengkondisian while (guess!= secretNumber)

Jika user memasukkan angka (`guess`) selain dari angka `secretNumber` maka perulangan terus berlanjut. Untuk menampung angka yang dimasukkan user kita gunakan fungsi `scanf()`.

```c
while(guess != secretNumber)
{
    printf("Silahkan tebak angka :\n");
    scanf("%d", &guess);
}
printf("Anda benar! Angkanya adalah %d", secretNumber);
return 0;
```

## Build the guess my number game! #2 🃏

Membuat functionalitas game menjadi lebih dinamis dan interaktif dengan menambahkan fitur :

1. `guessLimit` : kesempatan yang dimiliki user untuk menebak sampai 3 kali, jika lebih dari 3 kali angka belum tertebak maka game berakhir
2. `guessCount` : Menghitung berapa kali user menebak angka. `guessCount` digunakan sebagai patokan dalam menentukan apakah permainan berlanjut atau tidak.
3.

### Solusi

#### Membuat variable untuk fitur baru

```c
int guess;
int secretNumber = 5;
int guessLimit = 3;
int guessCount = 0;
int outOfGuesses = 0;
```

#### Menentukan kondisi menggunakan if untuk menghitung jumlah tebakan

Jika kondisi if masih terpenuhi maka jalankan perintah yang ada di dalam if dan jika sudah tidak lagi memenuhi maka lakukan perintah `outOfGlasses` yang ada di `else`.

```c
while(guess != secretNumber)
{
    if(guessCount < guessLimit)
    {
        printf("Silahkan tebak angka :\n");
        scanf("%d", &guess);
        guessCount++;
    }
    else
    {
        outOfGlasses = 1;
    }

}
```

> `outOfGlasses` digunakan untuk mengindikasikan bahwa tidak ada lagi kesempatan. Dengan mengganti nilainya menjadi 1 dari yang tadinya 0.

#### Menambahkan 2 kondisi di `while` yaitu guess != secretNumber && outOfGuess == 1

2 Skenario diatas jika kondisinya masih sama-sama benar (sifat dari logika AND &&) maka perintah tetap dijalankan.

```c
while(guess != secretNumber && outOfGuess ==0 )
{
    ....
 {
```

#### Menambahkan kondisi jika `outOfGuess` == 1 yang berarti kalah, dan selain itu (outOfGuess == 0) maka menang

```c
while(guess != secretNumber && outOfGuess ==0 )
{
    ...
}
if(outOfGuess == 1)
{
    printf("Anda menang!");
}
else
{
    printf("Anda kalah!");
}
```

#### Final Code

```c
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
```

## For Loop

Sama seperti while tetapi for lebih simple dengan menyimpan nilai awal, kondisi dan increament/decreamentnya di dalam satu kurung.

```c
int i = 0;
while(i<5)
{
    printf("%d",i);
    i++;
}
```

```c
int main(){
    int arrays[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i <= 5;i++)
    {
        printf("%d\n", arrays[i]);
    }
    return 0;

}
```

### Indexing arrays using for loop

Kita dapat memanfaatkan `i` sebagai selector untuk mengambil nilai suatu arrays berdasarkan indeksnya karena `i` akan berulang dan menghasilkan suatu angka yang dapat kita manfaatkan untuk melakukan _indexing_

```c
int main(){
    int arrays[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i <= 5;i++)
    {
        printf("%d\n", arrays[i]); // <-- Intinya disini arrays[selector i]
    }
    return 0;

}
```

## 2D Arrays & Nested Loops 🐣

```c
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
```

> `i` melakukan perulangan (sebanyak 3 kali), 3 di dapat dari jumlah baris(_rows_) yang ada di arrays, setiap `i` melakukan perulangan di dalamnya terdapat `j` yang juga melakukan perulangan pada setiap nilai yang terdapat di tiap-tiap baris `i` yaitu sebanyak 2. 2 di dapat dari jumlah kolom yang terdapat di masing masing baris `i`.

# Memory Addressing 💾

Semua komputer memiliki memory yang dikenal sebagai RAM dan RAM digunakan untuk menyimpan program yang sedang berjalan dikomputer. Memory dapat dikatakan sebagai Arrays yang menyimpan _bytes_-_bytes_. Di dalam arrays inilah setiap lokasi memory mempunyai alamatnya sendiri-sendiri. Alamat memory layaknya seperti indeks di dalam arrays. Komputer dapat mengakses alamat memory kapan saja (karena itulah dinamakan _Random access memory_).

```c
float f;
```

> Dibaca : Hi komputer! Alokasikan memory untuk `f` yang menyimpan nilai dengan tipe data `float`. Saat program dijalankan komputer akan menyediakan sebuah memory baru untuk tipe data `float` dengan alamat memory tertentu.

Sebagai pemrogram kita dapat mengakses nilai/value dari variable `f` dengan cukup memanggil nama variable tersebut. Sedangkan dibalik layar yang sebenarnya terjadi ialah komputer mencari alamat memory yang menyimpan nilai dari variable `f`. Jadi komputer mencari alamat memorynya bukan nama variablenya.

```c
f = 3.14;
```

Komputer memahaminya sebagai berikut, "Ambil nilai 3.14 ke dalam memory yang beralamat di 248,0000 (misalnya)". Komputer selalu _berfikir_ bahwa yang disebut memory ialah alamat dari suatu nilai.

## Menampilkan lokasi memory

Kita dapat mengakses lokasi memory dari suatu nilai yang kita simpan dalam variablef `f`.

```c
int main()
{
    float f = 3.14;
    printf("%p", &f);

    return 0;
}
```

> `%p` merupakan _format specifier_ yang digunakan untuk menampilkan alamat memory dari suatu nilai.

# Pointer ➡️

Pointer pada dasarnya adalah tipe data sama seperti `int`, `char`, `float` dll yang **menyimpan lokasi memory dari variable lainya**. Jadi pointers ini menyimpan alamat memory yang di dalamat alamat memory tersebut terdapat nilai dari variable lainya.

C akan mengaklokasikan 8 byte memory untuk menyimpan variable bertipe data pointer **terlepas** dari tipe data apa yang digunakan.

## Syntax

Penulisan pointers dapat dilakukan sebagai berikut

```c
int a;
int *b;
b = &a;
```

atau ditulis langsung

```c
int a;
int *b = &a;
```

`*b` menyimpan memory dari `a` yang ditulis dengan tambahan symbol `&`. Jadi kita bisa dengan singkat simpulkan bahwa alamat pointer `*b` sama dengan alamat memory variable `a`. Mari kita buktikan

```c
int a;
int b;
int *b = &a;

printf("alamat memory a %p", &a); // 0x7ffc5e8de754
printf("alamat pointer *b %p", &*b); // 0x7ffc5e8de754

return 0;

```

> Note : Alamat memory tiap tiap komputer akan berbeda-beda tergantung dari komputer masing masing

Karena pointer `*b` memiliki alamat memory yang sama dengan alamat memory variable `a` maka kita bisa katakan bahwa nilai berapapun bisa kita masukkan ke _b (overwrite) setelah men-*deferencing* nilai `a` dengan `*`. Dan variable `b` hanya bisa diisi dengan nilai apapun jika kita menyertakan symbol _ (arterisk) disebelahnya agar C menganggap `b` mempunyai memory yang sama dengan `a`.

```c
int main(){
    int i = 5;
    int *a = &i; // alamat a = alamat i
    int *b= &*a; // alamat b = alamat a
    int *c = &*b; // alamat c = alamat b

    *c = 10; // alamat i = alamat c

    printf("%d", i);
    return 0;


}

```

> Kita dapat alamat memorynya - kita bisa ubah nilai didalmnya

Seperti biasanya kita mendeklarasikan tipe data `int` untuk variable `i` dan `j` kemudian `int*p` ditujukan sebagai penanda bahwa ada variable yang bernama `p` untuk meminta compiler mendeklarasikanya sebagai pointer untuk tipe data integer. `*` mengindikasikan bahwa ada suatu variable yang dideklarasikan sebagai pointer. Jika kamu ingin mendeklarasikan suatu variable sebagai pointer maka gunakan (\*).

`p = &i` artinya nilai `p` yang sebelumnya belum kita inisialisasi kita isi dengan alamat memory dari variable i. kenapa `p` bisa diisi dengan _memory address_? karena kita telah menambahkan `*` sebelumnya. Setelah `p` terisi dengan alamat memory `i` maka otomatis pointer yang sebelumnya di `p` kini juga ada di `i`

`&` Dalam konteks pointer merupakan operator "**address-of**" yang mengembalikan alamat memory dari suatu operand. Operand disini ialah variable yang diberi & di depanya.

```c
int main()
{
    int a = 5;
    int *b = &a; // Pointer b memiliki alamat memory yang sama dengan a

    printf("a = %p\n", &a); // &a akan mengembalikan alamat yang di tempatinya, diawali dengan symbol &
    printf("b = %p\n", b); // b adalah variable yang menyimpan alamat memory a
    printf("*b = %p\n", &*b); // Alamat dari pointer *b memiliki alamat memory yang sama dengan a

    return 0;
}
```

Yang perlu menjadi catatan disini adalah `*b` dan `b` adalah 2 variable yang berbeda. b hanya bisa digunakan untuk menyimpan alamat memory saja (karena sebelumnya menggunakan `*`)

## Deferencing Pointers 🏹

_Deferencing_ digunakan untuk mengakses atau memanipulasi data yang terdapat di dalam suatu memory yang ditunjuk oleh pointer. (\*) (asterisk) digunakan bersamaan dengan pointer variable saat men-deferencing pointer variable.

```c
int main()
{
    int a = 1;
    int b;
    int *p; // Pointer yang belum diinisialisasi
    p = &a; // Mengisikan alamat memory int a ke dalam p
    b = *p; // Mengisi nilai b dengan *p yaitu lokasi memory dari int a

    printf("a : %d, b :%d, p :%d", a, b, *p);
    return 0; // 1, 1, 1

 }
```

Contoh lain :

```c
int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%p\n", &pAge); // Menyimpan alamat memory dari age
    printf("%d", *pAge); // Menyimpan value dari yang di-pointing oleh pAge yaitu age
    return 0;
}
```

> & -> %p : Digunakan untuk mengakses alamat memory | %d : Digunakan untuk deferencing/mengakses value dari suatu alamat memory\*/
