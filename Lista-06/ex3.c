#include <stdio.h>
#include <locale.h>

/*
3. Faça um programa que preencha uma matriz de tamanho N×N (o tamanho deve ser informado pelo usuário) 
e imprima o maior elemento de cada coluna da matriz
*/

int max(int n, int nums[n])
{
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (m < nums[i])
        {
            m = nums[i];
        }
    }
    
    return m;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, f1 = 0, f2 = 1, aux;
    printf("Insira o tamanho da matriz: ");
    scanf("%d", &n);
    int matriz[n][n], matriz_T[n][n];
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            aux = f2;
            f2 = f1 + f2;
            f1 = aux;
            matriz[i][j] = f1;
            printf("%d ", f1);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz_T[i][j] = matriz[j][i];
            //printf("%d ", matriz_T[i][j]);
        }
        // printf("\n");
        printf("Linha %d: %d\n", i, max(n, matriz_T[i]));
    }

    return 0;
}
