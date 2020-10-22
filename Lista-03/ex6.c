/*
Faça um programa que receba um número inteiro entre um e nove e imprima a mensagem
que está relacionada com o número digitado de acordo com a tabela abaixo. Caso o
número digitado não esteja entre um e nove, imprima: "Código inválido".

Código | Mensagem
1 Lave as mãos.
2 Passe álcool em gel.
3 Use máscara.
4 Cuide dos idosos.
5 Cultive paciência.
6 Cultive sabedoria.
7 Ame o próximo.
8 Exercite a disciplina.
9 Acalme a mente.
*/

#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int key, x = true;
    while (x) {
        printf("Insira o código: ");
        scanf("%d", &key);
        switch (key) {
        case 1:
            printf("Lave as mãos\n");
            x = false;
            break;
        case 2:
            printf("Passe álcool em gel\n");
            x = false;
            break;
        case 3:
            printf("Use máscara\n");
            x = false;
            break;
        case 4:
            printf("Cuide dos idosos\n");
            x = false;
            break;
        case 5:
            printf("Cultive paciência\n");
            x = false;
            break;
        case 6:
            printf("Cultive sabedoria\n");
            x = false;
            break;
        case 7:
            printf("Ame o próximo\n");
            x = false;
            break;
        case 8:
            printf("Exercite a disciplina\n");
            x = false;
            break;
        case 9:
            printf("Acalme a mente\n");
            x = false;
            break;
        default:
            printf("Código inválido.\n");
            break;
        }
    }
    return 0;
}
