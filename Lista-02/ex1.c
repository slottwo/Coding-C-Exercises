/* 1. Faça um algoritmo que receba um número digitado pelo usuário e escreva: 
"Numero digitado: x". 
Nesse caso, x é o número digitado pelo usuário. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x;
    printf("Insira um número: ");
    scanf("%f", &x);
    printf("Número digitado: %f\n", x);
    return 0;
}