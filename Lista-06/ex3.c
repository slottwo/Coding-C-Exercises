#include <stdio.h>
#include <locale.h>

/*
3. Faça um programa que preencha uma matriz de tamanho N×N (o tamanho deve ser informado pelo usuário) 
e imprima o maior elemento de cada coluna da matriz
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int N;
    
    printf("Insira o tamanho da matriz quadrada: ");
    scanf("%d", &N);

    int max_Columns[N], matriz[N][N];

    for (int i = 0; i < N; i++)
    {
        max_Columns[N] = 0;
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (max_Columns[j] < matriz[i][j])
            {
                max_Columns[j] = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("Column %d: %d\n", i+1, max_Columns[i]);
    }

    return 0;
}
