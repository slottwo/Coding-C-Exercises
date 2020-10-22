#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que receba dois números inteiros positivos do usuário.
O programa deve calcular e exibir a multiplicação dos dois números.
(Não pode utilizar o operador de multiplicação *).
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, x = 0;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    for (int i = 0; i < b; i++)
    {
        x += a;
    }
    printf("a * b: %d\n", x);
    return 0;
}