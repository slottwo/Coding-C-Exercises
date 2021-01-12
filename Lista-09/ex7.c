#include <locale.h>
#include <stdio.h>

/*
Crie um procedimento com nome altera_temperatura que tem como parâmetros uma estrutura do tipo cidade 
e um número real (pode ser negativo) que é a quantidade de unidades em Celsius que será incrementado 
(ou decrementado) da temperatura da cidade. Após atualizar a temperatura em Celsius, atualize a 
temperatura em Fahrenheit também (usando a função da primeira questão).
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

struct cidade *buscar_cidade (struct cidade cidades[], int codigo, int tam)
{
    struct cidade *resultado = NULL;
    for (int i = 0; i < tam + 1; i++)
    {
        if (cidades[i].code == codigo)
        {
            resultado = &(cidades[i]);
            break;
        }
        if (i == tam)
        {
            printf("CIDADE INEXISTENTE\n");
        }
    }
    return resultado;
}

void altera_temperatura(struct cidade *cid, float numero)
{
    cid->celsius += numero;
    cid->fahrenheit = fahrenheit(cid->celsius);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    struct cidade Cidade = gera_cidade();

    float delta_T;
    printf("\nInsira uma nova temperatura: [°C] ");
    scanf("%f", &delta_T);

    altera_temperatura(&Cidade, delta_T);

    printf("\n===== Cidade Atualizada ======\n");
    printf("Código: %d\n", Cidade.code);
    printf("Nome: %s\n", Cidade.name);
    printf("Temperatura: %.1f °C\n", Cidade.celsius);
    printf("Temperatura: %.1f °F\n", Cidade.fahrenheit);
    printf("==============================\n\n");

    return 0;
}
