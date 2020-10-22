#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba 3 notas de um aluno e mostre a média.
O programa deve ter validação de notas. Ou seja, se uma nota digitada 
for menor que 0 ou maior que 10, o programa deve informar "nota inválida"
e pedir para o usuário digitar a nota nova mente.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota;
    float media = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Insira a %dª nota: ", i+1);
        while (1)
        {
            scanf("%f", &nota);
            if (nota < 0 || nota > 10)
            {
                printf("Nota iválida, tente novamente: ");
                continue;
            }
            break;
        }
        media += nota/3;
    }
    printf("Sua média é: %.2f", media);
    return 0;
}