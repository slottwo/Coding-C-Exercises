#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
5. Imprima os valores do novo vetor (após o relloc). Após isso, libere o vetor da memória e encerre 
o programa.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    printf("N: ");
    scanf("%d", &n);

    int *p = (int*)malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("%dº: ", i+1);
        scanf("%d", (p+i));
    }
    
    printf("\nVetor: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", *(p+i), (i != n-1) ? ", " : ".\n");
    }
    
    int *p_ = (int*)realloc(p, (n*2)*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        p_[n+i] = p_[i] * 3;
    }

    printf("\nNovo Vetor: ");
    for (int i = 0; i < n*2; i++)
    {
        printf("%d%s", *(p_+i), (i != 2*n-1) ? ", " : ".\n");
    }
    
    free(p_);
    
    return 0;
}
