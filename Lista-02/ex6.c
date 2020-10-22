// Faça um algoritmo que receba a quantidade de votos nulos, brancos e válidos de uma eleição.
// O programa deve imprimir o percentual de cada tipo de voto em relação ao número total de eleitores.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int nulos, brancos, validos;
    int total;
    printf("Insira a quantidade de votos:\n");
    printf("- Nulos: ");
    scanf("%d", &nulos);
    printf("- Brancos: ");
    scanf("%d", &brancos);
    printf("- Válidos: ");
    scanf("%d", &validos);
    total = nulos+brancos+validos;
    printf("A percentagem de votos é:\n");
    printf("Nulos: %3.2f%% | Brancos: %3.2f%% | Válidos %3.2f%%\n", 100.0*nulos/total, 100.00*brancos/total, 100.00*validos/total);
    return 0;
}