#include <stdio.h>
#include <locale.h>

/*
6. Faça um programa que receba duas frases e, em seguida, crie uma string que contenha
as duas frases concatenadas.
OBS: Não pode usar as funções da biblioteca <string.h>
Ex.: Frase1: “Lá vem o disco voador.” Frase2: “Se for difícil, ande mais de-vagar.” 
– Frase Concatenada: “Lá vem o disco voador.Se for difícil, ande mais devagar.”.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char c, frase1[100], frase2[100];

    printf("1º Frase: ");
    scanf("%[^\n]", frase1);
    
    scanf("%c", &c);  // clearing buffer
    
    printf("2º Frase: ");
    scanf("%[^\n]", frase2);
    
    printf("Frase concatenada: %s%s\n", frase1, frase2);
    
    return 0;
}
