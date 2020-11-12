#include <stdio.h>
#include <locale.h>

/*
2. Faça um programa que leia uma matriz 4×4 de números inteiros do usuário e: 
(a) Imprima a soma dos elementos que estão em colunas ímpares.
(b) Imprima a média dos elementos que estão em linhas pares.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int s = 4;
    int matriz[s][s], soma_a = 0, soma_b = 0;

    for (int l = 0; l < s; l++)
    {
        for (int c = 0; c < s; c++)
        {
            printf("Item (%d,%d): ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
            if (c % 2 == 1)
            {
                soma_a += matriz[l][c];
            }
            if (l % 2 == 0)
            {
                soma_b += matriz[l][c];
            }
        }
    }

    printf("\nSua matriz inserida:\n");
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA soma dos elementos de colunas ímpares é %d\n", soma_a);
    printf("A média dos elementos de linhas pares é %.2f\n", (float) soma_b/s);
    return 0;
}
