// Faça um algoritmo que peça a quantidade de horas trabalhadas no mês e a quantidade de dinheiro 
// recebido por hora. O programa deve imprimir o total recebido no mês.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float horas, taxa;
    printf("Insira a quantidade de horas trabalhadas no mês: ");
    scanf("%f", &horas);
    printf("Insira a taxa de reais por hora trabalhada: ");
    scanf("%f", &taxa);
    printf("Salário do mês: R$ %3.2f\n", horas*taxa);
    return 0;
}