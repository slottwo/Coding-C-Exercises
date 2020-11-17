#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


/*
1. Dada a sequência de Fibonacci, faça uma função recursiva que receba um parâmetro 
inteiro x e retorne o número da sequência na posição x.
*/

int fib(int x)
{
    if (x < 3) {
        return 1;
    }
    return fib(x-1) + fib(x-2);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    scanf("%d", &i);
    printf("%d", fib(i));
    return 0;
}