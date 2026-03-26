#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "gerador.h"
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int tentativa = 0;
    printf("\n\tDesafio do Hexa!\n");

    while (tentativa >= 0)
    {
        uint8_t byte_secret = rand() % 256;
        printf("\n\t --- Novo Desafio! ---\n");
        printf("Binário: ");
        showByte(byte_secret);
        printf("\nPara desistir do desafio digite um número negativo!");
        printf("\nQual é o hexadecimal? ");
        scanf("%x", &tentativa);
        if (tentativa < 0)
        {
            printf("Amarelão!\n");
            break;
        }
        if (tentativa == byte_secret)
        {
            printf("Correto! O valor de %b é %02X\n", byte_secret);
        }
        else
        {
            printf("Errou! O valor correto é %02X\n", byte_secret);
        }
    }
    return 0;
}
