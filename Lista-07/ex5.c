#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


/*
5. Crie um programa que contenha um vetor de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros (ou seja, navegar o vetor utilizando a propriedade de ponteiros),
leia esse vetor do teclado e imprima o dobro de cada valor lido.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[5];
    int *p = v;
    scanf("%d %d %d %d %d", &v[0], &v[1], &v[2], &v[3], &v[4]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p+i)*2);
    }
    return 0;
}