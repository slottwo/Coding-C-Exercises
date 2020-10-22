#include <stdio.h>
#include <locale.h>

/*
Dada a serie de Fibonacci formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34..., 
crie um algoritmo que receba um número n do usuário e que calcule e imprima a soma 
dos n primeiros números da série.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int input;
    unsigned int x;
    unsigned long long int F1=1, F2=1, F, S = 2, limit = 18446744073709551615;
    printf("Insira um número natural: ");
    while (1)
    {
        scanf("%d", &input);
        if (input < 1) {
            printf("Número inválido. Tente novamente: ");
            continue;
        }
        else if (input > 93)
        {
            printf("Desculpe.Devido a limites técnicos, só posso diver que sua soma é maior que: \n%llu\n", limit);
            printf("Se desejar, tente novamente com números menores que 94: ");
            continue;
        }
        break;
    }
    x = input;
    if (x < 3) {
        printf("A soma dos %u primeiros números da sequencia fibonacci é %u\n", x, x);
    }
    else
    {
        for (int i = 3; i < x + 1; i++)
        {
            F = F1 + F2;
            S += F;
            F1 = F2;
            F2 = F;
        }
        printf("A soma dos %u primeiros números da sequencia fibonacci é %llu\n", x, S);
    }
    return 0;
}