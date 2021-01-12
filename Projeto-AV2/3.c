#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

struct Client
{
    int id;
    float balance;
    int gender; // 0: M, 1: F
};

float average_by_gender(struct Client *clients, int gender)
{
    float sum = 0.0;
    int len_of_gender = 0;
    for (int i = 0; i < sizeof(*clients)/sizeof(struct Client); i++)
    {
        if (clients[i].gender == gender)
        {
            sum += clients[i].balance;
            len_of_gender += 1;
        }
    }
    if (len_of_gender)
    {
        return sum/len_of_gender;
    }
    return 0;
}

float highest_by_gender(struct Client *clients, int gender)
{
    float highest = -FLT_MAX;
    for (int i = 0; i < sizeof(*clients)/sizeof(struct Client); i++)
    {
        if (clients[i].gender == gender)
        {
            if (clients[i].balance > highest)
            {
                highest = clients[i].balance;
            }
        }
    }
    return highest;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    struct Client *banco = (struct Client*)malloc(6 * sizeof(struct Client));
    char *gender = (char*)malloc(sizeof(char));
    
    for (int i = 0; i < 6; i++)
    {

        printf("\n%dº Cliente\n", i+1);
        printf("Código: ");
        scanf("%d", &(banco[i].id));
        printf("Saldo: [R$] ");
        scanf("%f", &(banco[i].balance));
        while (1)
        {
            printf("Gênero: [M: Masc, F: Fem] ");
            scanf("\n%c", gender);
            if (*gender == 'M' || *gender == 'm')
            {
                banco[i].gender = 0;
            }
            else if (*gender == 'F' || *gender == 'f')
            {
                banco[i].gender = 1;
            }
            else
            {
                printf("Desculpe, opção inválida. Tente novamente.\n");
                continue;
            }
            break;
        }
    }
    free(gender);
    gender = NULL;
    
    // A
    printf("\nA média do saldo dos homens é R$ %.2f\n", average_by_gender(banco, 0));
    printf("A média do saldo das mulheres é R$ %.2f\n", average_by_gender(banco, 1));
    // B
    float highest = highest_by_gender(banco, 0);
    if (highest == -FLT_MAX)
    {
        printf("Não há clientes registrados do gênero feminino.\n");
    }
    else
    {
        printf("\nO maior saldo de mulheres é R$ %.2f\n", highest_by_gender(banco, 0));
    }
    highest = highest_by_gender(banco, 1);
    if (highest == -FLT_MAX)
    {
        printf("Não há clientes registrados do gênero masculino.\n");
    }
    else
    {
        printf("\nO maior saldo de homens é R$ %.2f\n", highest_by_gender(banco, 0));
    }
    return 0;
}
