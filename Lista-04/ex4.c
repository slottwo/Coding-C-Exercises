#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que receba um número natural e imprima se ele é ou não triangular.
Um número natural é triangular se ele é produto de trêsnúmeros naturais consecutivos.
Exemplo: 120 é triangular, pois 4∗5∗6 = 120.O número 6 é triangular,já que 1∗2∗3 = 6
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x;
    while (1)
    {
        printf("Insira um número natural: ");
        scanf("%d", &x);
        if (x < 0)
        {
            printf("Número inválido, tente novamente.\n");
            continue;
        }
        break;
    }
    if (x < 3)
    {
        printf("%d não é triangular.", x);
    }
    else
    {
        for (int i = 1; i <= x-2; i++)
        {
            if (i*(i+1)*(i+2) == x)
            {
                printf("%d é triangular: %d = %d*%d*%d\n", x, x, i, i+1, i+2);
                break;
            }
            else if (i == x-2)
            {
                printf("%d não é triangular.\n", x);
            }
        }
    }
    return 0;
}