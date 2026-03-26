#include <stdlib.h>
#include <stdio.h>
int bash()
{
    for (int n = 0; n < 10; n++)
    {
        printf("=");
    }
}
int main(int argc, char const *argv[])
{
    int line, col, aux;
    for (line = 1; line <= 5; line++)
    {
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        for (aux = 1; aux <= (2 * line - 1); aux++)
        {
            printf("#");
        }
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    bash();
    printf("\n");

    for (line = 5; line >= 1; line--)
    {
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        for (aux = 1; aux <= (2 * line - 1); aux++)
        {
            printf("#");
        }
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    bash();
    printf("\n");
    for (line = 5; line >= 1; line--)
    {
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        for (aux = 1; aux <= (2 * line - 1); aux++)
        {
            printf("#");
        }
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (line = 1; line <= 5; line++)
    {
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        for (aux = 1; aux <= (2 * line - 1); aux++)
        {
            printf("#");
        }
        for (col = 0; col <= 5 - line; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
