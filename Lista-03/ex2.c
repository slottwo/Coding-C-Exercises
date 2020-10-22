/*
Faça um algoritmo que receba um número x digitado pelo usuário. O programa deve
imprimir se x é ímpar ou par.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Insira um inteiro: ");
    scanf("%d", &x);
    if (x%2 == 0) {
        printf("%d é par.", x);
    } else {
        printf("%d é ímpar.", x);
    }
    return 0;
}
