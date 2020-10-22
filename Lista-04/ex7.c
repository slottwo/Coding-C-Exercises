#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que recebe dez números digitados pelo usuário.
Após isso, o algoritmo deve informar o maior e o menor número digitado
(Utilize estruturas de repetição)
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x, maior, menor;
    printf("1º: ");
    scanf("%f", &x);
    maior = menor = x;
    for (int i = 1; i < 10; i++)
    {
        printf("%dº: ", i+1);
        scanf("%f", &x);
        if (x > maior)
        {
            maior = x;
        }
        if (x < menor)
        {
            menor = x;
        }
    }
    printf("O maior número digitado foi: %f\n", maior);
    printf("O menor número digitado foi: %f\n", menor);
    return 0;
}