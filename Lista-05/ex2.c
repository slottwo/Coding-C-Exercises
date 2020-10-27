#include <stdio.h>
#include <locale.h>

/*
2. Faça um programa que recebe 10 números inteiros e os armazene em um vetor. Calcule e mostre: 
(a) A quantidade de números pares.
(b) A soma dos números pares.
(c) A quantidade de números ímpares.
(d) A soma dos números ímpares.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[10], num_pares = 0, soma_pares = 0, soma_impares = 0;
    
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
        if (vetor[i]%2 == 0)
        {
            num_pares +=1;  // (a) e (c)
            soma_pares += vetor[i];  // (b)
        } 
        else
        {
            soma_impares += vetor[i]; // (d)
        }
    }
    printf("\nA quantidade de números pares é: %d\n", num_pares);
    printf("A soma de números pares é: %d\n", soma_pares);
    printf("A quantidade de números ímpares é: %d\n", 10-num_pares);
    printf("A soma de números ímpares é: %d\n", soma_impares);
    return 0;
}
