#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
4. Faça um programa que receba um número n e preencha um vetor com n números inteiros.
Em seguida, imprima o vetor na ordem inversa. 
Ex: n:3, Vetor: [4,76,9] – Ordem deImpressão: [9,76,4]
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    char step[3];
    
    printf("n: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        printf("%dº: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("[");
    for (int i = n-1; !(i < 0); i--)
    {
        if (i != 0)
        {
            strcpy(step, ", ");
        }
        else
        {
            strcpy(step, "]\n");
        }
        printf("%d%s", vetor[i], step);
    }

    return 0;
}
