#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

/*
3. Na função principal (main), chame a função gera_vetor (com n digitado pelo usuário), armazene o 
vetor retornado em um ponteiro int* e imprima os seus elementos utilizando aritmética de ponteiros.
*/

int* gera_vetor(int n)
{
    int *p = (int*)malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("%dº: ", i+1);
        scanf("%d", (p+i));
    }
    
    return p;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    printf("N: ");
    scanf("%d", &n);
    
    int *p; p = gera_vetor(n);
    
    printf("\nVETOR: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d%s", *(p+i), (i!=n-1) ? ", " : ".\n");
    }

    return 0;
}
