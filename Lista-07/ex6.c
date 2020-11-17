#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


/*
6. Crie um programa que contenha um vetor de inteiros contendo 7 elementos. Utilizando 
apenas aritmética de ponteiros (ou seja, navegar o vetor utilizando a propriedade de ponteiros),
leia esse vetor do teclado e imprima a soma dos elementos que estão em posição par.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v[7], s = 0;
    int *p = v;
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &v[i]);
        if (i%2) {
            s += *(p+i);
        }
    }    
    printf("%d", s);
    return 0;
}