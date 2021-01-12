#include <locale.h>
#include <stdio.h>

/*
Crie um procedimento que tem como parâmetros um vetor de cidades e o tamanho do vetor.
Imprima as informações de todas as cidades registradas no vetor.
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

void listar_cidades(struct cidade cidades[],int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("======== Cidade %s%d =========\n", i > 999 ? "" : (i > 99 ? "0" : (i > 9 ? "00" : "000")), i+1);
        printf("Código: %d\n", cidades[i].code);
        printf("Nome: %s\n", cidades[i].name);
        printf("Temperatura: %.1f °C\n", cidades[i].celsius);
        printf("Temperatura: %.1f °F\n", cidades[i].fahrenheit);
    }
    printf("==============================\n\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o número de cidades: ");
    int N;
    scanf("%d", &N);
    struct cidade cidades[N];

    for (int i = 0; i < N; i++)
    {
        printf("== Cadastrando a %dª Cidade ==\n", i+1);
        cidades[i] = gera_cidade();
    }
    printf("==============================\n");

    listar_cidades(cidades, N);

    return 0;
}
