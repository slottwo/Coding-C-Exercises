/*
Construa um algoritmo que leia três números do teclado e calcule a média. Se a média for
maior ou igual à sete, imprima: "Parabéns, você foi aprovado!". Caso contrário, imprima:
"Você fará prova nal!".
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    if ((nota1 + nota2)/2 >= 7) {
        printf("Parabéns, você foi aprovado!");
    } else {
        printf("Você fará prova final!");
    }
    return 0;
}
