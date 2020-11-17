#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


/*
2. Escreva um programa que contenha duas variaveis inteiras.
Compare seus endereços e exiba o maior endereço.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    if (&a > &b)
    {
        printf("a\n");
    }
    else
    {
        printf("b\n");
    }
    return 0;
}