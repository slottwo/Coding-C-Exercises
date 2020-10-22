/*
Faça um programa que receba a massa e a altura de uma pessoa. O programa deve
calcular e imprimir o IMC dessa pessoa, além de, em seguida, informar qual situação a
pessoa se enquadra. O cálculo do IMC é dado por: IMC = massa/altura²

IMC ≤ 20: Abaixo do peso
20 < IMC ≤ 25: Peso normal
25 < IMC ≤ 30: Sobrepeso
30 < IMC ≤ 40: Obesidade
IMC > 40: Obesidade Mórbida
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float m, a, imc;
    printf("Informe sua massa: ");
    scanf("%f", &m);
    printf("Informe sua altura: ");
    scanf("%f", &a);
    imc = m/a/a;
    if (imc <= 20)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc <= 25)
    {
        printf("Peso normal\n");
    }
    else if (imc <= 30)
    {
        printf("Sobrepeso\n");
    }
    else if (imc <= 40)
    {
        printf("Obesidade\n");
    }
    else
    {
        printf("Obesidade mórbida\n");
    }
    return 0;
}
