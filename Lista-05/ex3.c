#include <stdio.h>
#include <locale.h>

/*
3. Faça um programa que receba um númerone preencha um vetor com n números inteiros.
Em seguida, verifique e informe se o vetor está em ordem crescente, decrescente, ou 
se elenão satisfaz nenhuma estas condições.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    int c = 0; // 1: caos, 0: ordem
    int v = 0; // 0: constante, -1: decrescente, 1: crescente

    do
    {
        printf("Insira um inteiro positivo: ");
        scanf("%d", &n);
    } while (n <= 0);

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        printf("%dº: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nA sequência [%d", vetor[0]);
    for (int i = 1; i < n; i++)
    {
        printf(", %d", vetor[i]);
        if (!c)
        {
            if (vetor[i] == vetor[i-1] && v == 0)
            {
                continue;
            }
            else if (vetor[i] >= vetor[i-1] && v >= 0)
            {
                v = 1;
                continue;
            }
            else if (vetor[i] <= vetor[i-1]  && v <= 0)
            {
                v = -1;
                continue;
            }
            else
            {
                c = 1;
            }
        }
    }
    printf("] é: ");
    if (c)
    {
        printf("Desordenada.\n");
    }
    else
    {
        if (v == 0)
        {
            printf("Constante.\n");
        }
        else if (v>0)
        {
            printf("Crescente.\n");
        }
        else
        {
            printf("Decrescente.\n");
        }
    }
    
    return 0;
}
