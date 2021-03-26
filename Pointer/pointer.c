
#include <stdio.h>
#include <stdlib.h>

///////// ----- Pointer ----- //////////

// int main()
// {
//     int i,j;
//     int *p;   /* a pointer to an integer */
//     p = &i;
//     *p=5;
//     j=i;
//     printf("%d %d %d\n", i, j, *p);
//     return 0;
// }


// int main()
// {
//     int usiaAndi;
//     int usiaBudi;
//     int *p;
//     p = &usiaAndi;
//     *p = 20;
//     usiaBudi = usiaAndi; // Karena usiaBudi belum diketahui maka kita isikan dengan usiaAndi yang sudah diketahui sebelumnya. 

//     printf("Budi : %d, Andi : %d, p : %d", usiaBudi, usiaAndi, *p);

//     return 0;
// }

///////// ----- Deferencing pointers ----- //////////
// int main()
// {
//     int a = 1;
//     int b; 
//     int *p; // Pointer yang belum diinisialisasi
//     p = &a; // Mengisikan alamat memory int a ke dalam p
//     b = *p; // Mengisi nilai b dengan *p yaitu lokasi memory dari int a

//     printf("a : %d, b :%d, p :%d", a, b, *p);
//     return 0; // 1, 1, 1
// }

// ----- Note -----
/* & -> %p : Digunakan untuk mengakses alamat memory 
   * -> %d : Digunakan untuk deferencing/mengakses value dari suatu alamat memory*/

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%p\n", &pAge); // Menyimpan alamat memory dari age
    printf("%d", *pAge); // Menyimpan value dari yang di-pointing oleh pAge yaitu age
    return 0;
}

