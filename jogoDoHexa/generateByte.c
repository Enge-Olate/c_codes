#include <stdio.h>
#include <stdlib.h>
#include "gerador.h"

void showByte(uint8_t n)
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
}