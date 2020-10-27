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
    
    int i = 0, f = 1;
    char c, frase[256];

    do
    {
        printf("\n%dª Frase [Max %d]: ", f, 255-i);
        while (1)
        {
            if (i < 255)
            {
                scanf("%c", &c);
                if (c == '\n')
                {
                    f++;
                    break;
                }
                frase[i] = c;
                i++;
            }
            else
            {
                printf("\n\nLimite alcançado. [255]\n");
                f = 3;
                break;
            }
        }
    } while (f < 3);

    frase[i] = '\0';

    printf("Frase concatenada: %s\n", frase);
    
    return 0;
}
