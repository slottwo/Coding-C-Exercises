#include <stdio.h>
#include <locale.h>

/*
7. Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número 
de divisores desse valor.
*/

int div(int n)
{
    int divisors = 1;
    for (int d = 1; d < n; d++)
    {
        if (n%d == 0)
        {
            divisors++;
        }
    }
    return divisors;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    while (1)
    {
        printf("Insira um número inteiro positivo: ");
        scanf("%d", &num);
        if (num > 0)
        {
            break;
        }
        printf("Erro: Numero não positivo. Tente novamente.\n");
    }
    printf("\nO número de divisores de %d é %d\n", num, div(num));
    return 0;
}
