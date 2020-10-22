#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que receba um número digitado pelo usuário 
e imprima todos os divisores do número.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Insíra um número inteiro: ");
    scanf("%d", &n);
    printf("Os divisores de %d são: {", n);
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("%d}\n", n);
    return 0;
}