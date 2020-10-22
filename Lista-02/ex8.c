/* Faça um programa que pergunte quanto você ganha por mês. Calcule e imprima: 
i) Salário bruto; 
ii) Quanto pagou de imposto (8%); 
iii) Quanto pagou ao sindicato (5%);
iv) Salário líquido. */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario;
    printf("Quanto você ganhou esse mês? R$ ");
    scanf("%f", &salario);
    // Irei considerar que o sindicato calcula sua parte a partir do salário líquido
    printf("Seu salário bruto é: R$ %3.2f\n", salario/(0.95*0.92));  // total = liq*(1-5%) = brt*(1-8%) -> total = brt*(0.95*0.92)
    printf("Você pagou R$ %3.2f de imposto.\n", salario*0.08/(0.95*0.92)); // i = brt*8% = brt*0.08 = total/(0.95*0.92)*0.08
    printf("Você pagou R$ %3.2f ao sindicato.\n", salario*0.05/(0.95)); // sindicato = lig*5% = total/(1-5%)*5% = total/0.95*0.05
    printf("Seu salário líquido é: R$ %3.2f\n", salario/0.95); // liq = total/(1-5%) = total/0.95
    return 0;
}

