/*
Faça um programa que receba 3 números e imprima o maior número digitado.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float a, b, c;
    printf("Insira 3 números.\n");
    printf("1º: ");
    scanf("%f", &a);
    printf("2º: ");
    scanf("%f", &b);
    printf("3º: ");
    scanf("%f", &c);
    if (a>b) {
        if (a>c) {
            printf("%f", a);
        } else {
            printf("%f", c);
        }
    } else if (b>c) {
        printf("%f", b);
    } else {
        printf("%f", c);
    }
    return 0;
}
