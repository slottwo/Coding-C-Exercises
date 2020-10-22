// Faça um programa que receba uma medida em metros e que imprima o equivalente em centímetros.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float medida;
    printf("Insira uma medida em metros: ");
    scanf("%f", &medida);
    printf("Sua medida convertida em centímetros: %4.3f cm\n", medida*100);
    return 0;
}