#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
4. Na função principal (main), utilize a função realloc para aumentar a quantidade de posições do 
vetor. Nesse caso, o vetor terá duas vezes os eu tamanho original. Nas posições novas do vetor, 
espelhe as posições originais de tal forma que as novas posições tenham 3 vezes o valor das posições 
originais. 
Exemplos: 
- O vetor [1, 1, 2], depois do realloc, deverá ter os elementos: 
[1, 1, 2, 3, 3, 6]. 
- O vetor [1, 1, 2, 3], depois do realloc, deverá ter os elementos: 
[1, 1, 2, 3, 3, 3, 6, 9]. 
- O vetor [1, 1, 2, 3], depois do realloc, deverá ter os elementos: 
[1, 1, 2, 3, 5, 3, 3, 6, 9, 15].
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
    
    return 0;
}
