#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba um número inteiro do usuário (maior do que 1)
e imprima se ele é primo ou não.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x;
    char* primo = "é";
    while (1)
    {
        printf("Insira um número inteiro maior que um: ");
        scanf("%d", &x);
        if (x < 2)
        {
            printf("Número inválido, tente novamente.\n");
            continue;
        }
        break;
    }
    for (int i = 2; i < x; i++)
    {
        if (x%i == 0)
        {
            primo = "não é";
            break;
        }
    }
    printf("%d %s primo.\n", x, primo);
    return 0;
}