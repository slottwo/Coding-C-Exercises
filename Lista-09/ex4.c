#include <locale.h>
#include <stdio.h>

/*
Na função principal (main), crie um vetor do tipo estrutura cidade com 3 elementos. 
Chame a função que gera cidades 3 vezes e atribua cada cidade retornada para uma região do vetor.
*/

struct cidade
{
    int code;
    char name[30];
    float celsius;
    float fahrenheit;
};

float fahrenheit(float celsius)
{
    return 1.8*celsius + 32;
}

struct cidade gera_cidade()
{
    struct cidade nova;
    printf("Código: ");
    scanf("%d", &nova.code);
    printf("Nome: [Max 30 caracteres] ");
    scanf("\n%[^\n]%*c", nova.name);
    printf("Temeratura: [°C] ");
    scanf("%f", &nova.celsius);
    nova.fahrenheit = fahrenheit(nova.celsius);
    return nova;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    struct cidade cidades[3];

    for (int i = 0; i < 3; i++)
    {
        printf("== Cadastrando a %dª Cidade ==\n", i+1);
        cidades[i] = gera_cidade();
        printf("==============================\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("========= Cidade 0%d =========", i+1);
        printf("Código: %d\n", cidades[i].code);
        printf("Nome: %s\n", cidades[i].name);
        printf("Temperatura: %.1f °C\n", cidades[i].celsius);
        printf("Temperatura: %.1f °F\n", cidades[i].fahrenheit);
        printf("==============================\n");
    }
    
    return 0;
}
