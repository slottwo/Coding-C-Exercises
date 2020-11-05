#include <stdio.h>
#include <locale.h>

/*
1. Faça um programa que preencha uma matriz de tamanho L×C (o tamanho deve ser informado pelo usuário) 
e crie uma nova matriz sendo ela uma matriz transposta da matriz L×C.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int l, c;

    printf("Insira L: ");
    scanf("%d", &l);
    printf("Insira C: ");
    scanf("%d", &c);

    int matriz[l][c], matriz_T[c][l];
    
    printf("Matriz:\n");

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((i+1)*10+(j+1) < 100)
            {
                if ((i+1)*10+(j+1) < 10)
                {
                    printf(" ");
                }
                printf(" ");
            }
            matriz[i][j] = (i+1)*10+(j+1);
            printf("%d ", (i+1)*10+(j+1));
        }
        printf("\n");
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            matriz_T[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (matriz[i][j] < 100)
            {
                if (matriz_T[i][j] < 10)
                {
                    printf(" ");
                }
                printf(" ");
            }
            printf("%d ", matriz_T[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
