#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
5. Faça um programa que receba uma frase e dois caracteres. Depois verifique se o primeiro caractere 
digitado aparece na frase digitada. Caso afirmativo, substitua todas asaparições do primeiro caractere 
pela do segundo caractere. Por fim imprima a frase alterada. (Considere letras maiúsculas e minúsculas 
como diferentes e considere que o usuárionão vai pedir para modificar letras acentuadas). 
Ex.: Frase: “Lá vem o disco voador”, Caractere1: “o”, Caractere2: “w”- Frase Final: “Lá vem w discw vwadwr”.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char frase[80];
    char c1, c2;
    printf("Insira uma frase para ser editada [Max 80 caracteres]: ");
    gets(frase);
    printf("Insira o caractere a ser substituído e em seguida seu substituto [Ex: au substituirá a por u]: ");
    scanf("%c%c", &c1, &c2);

    printf("\nFrase: %s\n", frase);
    printf("Caractere antigo: %c\n", c1);
    printf("Caractere novo: %c\n", c2);

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == c1)
        {
            frase[i] = c2;
        }
    }

    printf("Frase final: %s\n", frase);
    
    return 0;
}
