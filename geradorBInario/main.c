#include"gerador.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    uint8_t num[10];
    int n = 10;
    srand(time(NULL));
    randomArray(num, n);
    printf("Gerando Bytes aleatórios: \n");
    for(int i =0; i < n; i++){
        printf("Id: %d | Dec: %3d | Bin: ", i, num[i]);
        printByteBinary(num[i]);
        printf("\n");
    }
    return 0;
}
