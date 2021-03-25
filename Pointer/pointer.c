
#include <stdio.h>
#include <stdlib.h>

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


int main()
{
    int usiaAndi;
    int usiaBudi;
    int *p;
    p = &usiaAndi;
    *p = 20;
    usiaBudi = usiaAndi; // Karena usiaBudi belum diketahui maka kita isikan dengan usiaAndi yang sudah diketahui sebelumnya. 

    printf("Budi : %d, Andi : %d, p : %d", usiaBudi, usiaAndi, *p);

    return 0;
}