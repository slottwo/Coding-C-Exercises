#include <stdio.h>
#include <locale.h>

/*
4. Faça uma função que recebe um valor em metros (como parâmetro) e retorna um valorem centímetros.
*/

float mtocm(float m)
{
    return m*100;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float d;
    printf("Insira uma distância em metros: ");
    scanf("%f", &d);
    printf("%.2f m = %.2f cm", d, mtocm(d));
    return 0;
}
