#include <locale.h>
#include <stdio.h>

/*
1. Dada a sequência de fibonacci [1,1,2,3,5,8,13,21,34,55...], faça uma função que tenha como 
parâmetro um inteiro n e que retorna o número da sequência de Fibonacci que está na posiçãon.
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
    printf("%d\n", fib(i));
    
    return 0;
}
