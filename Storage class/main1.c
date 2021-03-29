#include <stdio.h>


void files_1();

int mainPrivateData;
int main()
{
    mainPrivateData = 100;
    printf("mainPrivateData : %d\n", mainPrivateData);
    
    
    files_1();
    
    printf("mainPrivateData : %d", mainPrivateData);
    return 0;
}
