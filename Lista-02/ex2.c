// Faça um algoritmo que receba dois números digitados pelo usuário e 
// imprima a multiplicação entre eles.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float a, b;
    printf("Insira um número: ");
    scanf("%f", &a);
    printf("Insira outro número: ");
    scanf("%f", &b);
    printf("Resultado da multiplicação: %f", a*b);
    return 0;
}