#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

/*
2. Sabendo que funções também podem retornar endereços de memória. Por exemplo, uma função com a 
assinatura "int* gera_vetor(int n);" precisa retornar um endereço de memória que armazena um número 
inteiro (ou o endereço inicial de um vetor do tipo inteiro). Dada essa contextualização, faça uma 
função que receba um parâmetro inteiro n e aloca na memória heap um vetor de n posições. Além disso, 
cada posição do vetor deve estar relacionada com o número da sequência de Fibonacci daquela posição. 
Após isso, a função deve retornar o endereço inicial do vetor.
*/

int fib(int x)
{
    if (x < 3) {
        return 1;
    }
    return fib(x-1) + fib(x-2);
}

int* gera_vetor(int n)
{
    int *p = (int*)malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        *(p+i) = fib(i+1);
    }
    
    return p;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    scanf("%d", &n);
    
    int *p; p = gera_vetor(n);
    
    printf("VETOR: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", *(p+i), (i!=n-1) ? ", " : ".\n");
    }

    return 0;
}
