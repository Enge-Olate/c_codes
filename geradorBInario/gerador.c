#include"gerador.h"
#include<stdio.h>
#include<stdlib.h>

void randomArray(uint8_t *array, int n){
    for(int i = 0; i < n; i++){
        array[i] = (uint8_t)(rand() % 256);
    }
}

void printByteBinary( uint8_t byte){
    for(int i = 7; i >= 0; i--){
        printf("%d", (byte >> i) & 1);
    }
}