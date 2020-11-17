#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


/*
Elaborar um programa que leia dois valores inteiros (a e b).
Em seguida faça uma função que retorne a soma do dobro dos dois números lidos.
Além disso, a função deverá armazenar o dobro de a na própria variável a e o dobro de b na própria variável b.
*/

int twice_sum(int *a, int *b)
{
    *a = *a*2;
    *b = *b*2;
    return *a+*b;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", twice_sum(&a, &b));
    return 0;
}