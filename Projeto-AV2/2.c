#include <locale.h>
#include <stdio.h>

/*
*/

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int m, n;
    printf("M N: ");
    scanf("%d %d", &m, &n);

    int matriz[m][n], vetor[n], smaller[2] = {0, 0};

    printf("\nMatriz: %d x %d\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Item(%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] < matriz[smaller[0]][smaller[1]])
            {
                smaller[0] = i;
                smaller[1] = j;
            }
        }
    }
    printf("\nVetor: %d\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Item(%d): ", i);
        scanf("%d", &vetor[i]);
    }
    
    int iguais = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] == vetor[j])
            {
                if (j == n-1)
                {
                    iguais +=1;
                    break;
                }
                continue;
            }
            break;
        }
        if (iguais)
        {
            break;
        }
    }
    if (iguais)
    {
        printf("\nA matriz possui uma linha igual ao vetor.\n");
    }
    else
    {
        printf("\nA matriz NÃO possui uma linha que seja igual ao vetor.\n");
    }
    printf("O menor número da matriz é %d, e se localiza em (%d,%d)\n", matriz[smaller[0]][smaller[1]], smaller[0], smaller[1]);

    return 0;
}
