/*
Faça um algoritmo que receba dois números e informe se o primeiro é divisível pelo
segundo.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b;
    printf("Insira o dividendo: ");
    scanf("%d", &a);
    printf("Insira o divisor: ");
    scanf("%d", &b);
    if (a%b == 0) {
        printf("%d é divisível por %d", a, b);
    }
    else {
        printf("%d não é divisível por %d", a, b);
    }
    return 0;
}
