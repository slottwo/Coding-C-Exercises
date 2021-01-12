#include <locale.h>
#include <stdio.h>

/*
Faça uma função que receba como parâmetros um vetor do tipo int e o tamanho desse vetor.
A função deve retornar 1 caso o vetor seja um lecker e 0 caso contrário.
Dizemos que um vetor é lecker se ele tem apenas um elemento que é maior do que seus vizinhos.
Considere que o vetor terá pelo menos 2 elementos. 
Exemplos:
[2,5,10,46,25,12,7] é lecker, pois 46 é o único elemento que é maior que seus vizinhos, quesão 10 e 25.
[13,5,4,2,3,0] não é lecker, pois 13 é maior que 5 (5 é o único vizinho de 13) e 3 é maiordo que 2 e 0 (2 e 0 são vizinhos de 3).
[4, 4, 4] não é lecker, pois não existe ninguém que é maior do que os vizinhos.
[4,7] é lecker.
*/

int is_lecker (int vetor[], int len)
{
    int big_neighbors = 0;
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            big_neighbors += (vetor[i] > vetor[i+1]);
        }
        else if (i == len - 1)
        {
            big_neighbors += (vetor[i] > vetor[i-1]);
        }
        else
        {
            big_neighbors += (vetor[i] > vetor[i+1] && vetor[i] > vetor[i-1]);
        }
        if (big_neighbors > 1)
        {
            return 0;
        }
    }
    return big_neighbors;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int test1[7] = {2,5,10,46,25,12,7};
    int test2[6] = {13,5,4,2,3,0};
    int test3[3] = {4, 4, 4};
    int test4[2] = {4,7};
    int test5[10] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    int test6[100] = {1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2};
    int test7[9] = {1, 1, 1, 1, 1, 1, 2, 3, 4};

    printf("Teste 1: %d\n", is_lecker(test1, 7));
    printf("Teste 2: %d\n", is_lecker(test2, 6));
    printf("Teste 3: %d\n", is_lecker(test3, 3));
    printf("Teste 4: %d\n", is_lecker(test4, 2));
    printf("Teste 5: %d\n", is_lecker(test5, 10));
    printf("Teste 6: %d\n", is_lecker(test6, 100));
    printf("Teste 6: %d\n", is_lecker(test7, 9));

    return 0;
}
