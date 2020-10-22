/* Faça um programa que pergunte a quantidade de quilômetros percorridos por um carro alugado 
e a quantidade de dias do aluguel. Calcule o preço do aluguel, levando em consideração que
o aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por quilometro rodado. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float km;
    int dias;
    printf("Quilometros percorridos: ");
    scanf("%f", &km);
    printf("Dias do aluguel: ");
    scanf("%d", &dias);
    printf("Preço do aluguel: R$ %3.2f\n", 60*dias + 0.15*km);
    return 0;
}