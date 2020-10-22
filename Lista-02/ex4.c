//Faça um algoritmo que receba o raio de um círculo, calcule e imprima a área do círculo (A = πr²)

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float raio;
    printf("Insira um raio: ");
    scanf("%f", &raio);
    printf("A aréa do círculo é: %5.4f\n", 3.141592654*raio*raio);
    return 0;
}