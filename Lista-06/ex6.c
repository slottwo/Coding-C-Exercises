#include <stdio.h>
#include <locale.h>

/*
6. Faça uma função que receba dois valores inteiros (como parâmetros) e retorne o maior dos dois números.
*/

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("Maior: %d\n", max(a, b));
    return 0;
}
