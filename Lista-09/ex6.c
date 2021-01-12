#include <locale.h>
#include <stdio.h>

/*
Crie uma função que tem como parâmetros um vetor de cidades, o código de uma cidade, e o tamanho do 
vetor. A função deve retornar um ponteiro que possui o endereço da cidade no vetor que tem o código
passado como parâmetro. 
Caso não exista uma cidade com o código passado, imprima na tela: "CIDADE INEXISTENTE".
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

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int N;
    printf("Insira o número de cidades: ");
    scanf("%d", &N);
    
    struct cidade cidades[N];

    for (int i = 0; i < N; i++)
    {
        printf("== Cadastrando a %dª Cidade ==\n", i+1);
        cidades[i] = gera_cidade();
    }
    printf("==============================\n");
    
    int codigo;
    struct cidade *resultado_da_busca;
    resultado_da_busca = NULL;
    
    while (resultado_da_busca == NULL)
    {
        printf("\nInsira o código da cidade que você procura: ");
        scanf("%d", &codigo);
        resultado_da_busca = buscar_cidade(cidades, codigo, N);
    }
    
    printf("\n===== Cidade Encontrada ======\n");
    printf("Nome: %s\n", resultado_da_busca->name);
    printf("Temperatura: %.1f °C\n", resultado_da_busca->celsius);
    printf("Temperatura: %.1f °F\n", resultado_da_busca->fahrenheit);
    printf("==============================\n\n");

    return 0;
}
