#include <stdio.h>
#include <locale.h>

/*
7. Faça um programa que verifique se duas frases digitadas são iguais.
OBS: Não podeusar a biblioteca <string.h>
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char c, frase1[100], frase2[100];
    int igual = 1;  // 0: Não, 1: Sim
    
    printf("1º Frase: ");
    scanf("%[^\n]", frase1);
    
    scanf("%c", &c);  // clearing buffer
    
    printf("2º Frase: ");
    scanf("%[^\n]", frase2);
    
    int i = 0;
    printf("As frases ");
    do
    {
        // printf("%d: %c==%c?", i, frase1[i], frase2[i]);  // Debug
        if (frase1[i] != frase2[i])
        {
            printf("não ");
            igual = 0;
            break;
        }
        i++;
    } while (frase1[i] != '\0' || frase2[i] != '\0');
    printf("são iguais.\n");

    return 0;
}
