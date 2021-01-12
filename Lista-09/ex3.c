#include <locale.h>
#include <stdio.h>

/*
Crie um procedimento (sem parâmetros) que receba do usuário (através do teclado) o código da cidade, 
o nome e a temperatura em Celsius. A função de ver e tornar uma estrutura do tipo cidade com os 
campos que foram digitados pelo usuário (use a função da primeira queestão para calcular o campo 
Fahrenheit).
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
    printf("Cadastrando Cidade\n");
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
    
    struct cidade nova_cidade = gera_cidade();
    printf("Código: %d\nNome: %s\nTemperatura: %.1f °C | %.1f °F\n", 
        nova_cidade.code, 
        nova_cidade.name, 
        nova_cidade.celsius, 
        nova_cidade.fahrenheit);

    return 0;
}
