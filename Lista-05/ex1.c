#include <stdio.h>
#include <locale.h>

/*
1. Faça um programa que preencha um vetor com 10 números. 
Depois, imprima o vetor preenchido e informe o menor valor do vetor.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[10], maior;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
        if (i==0)
        {
            maior = vetor[i];
        }
        else if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}
