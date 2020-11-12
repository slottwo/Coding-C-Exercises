#include <stdio.h>
#include <locale.h>

/*
5. Faça uma função que recebe um valor em Celsius (como parâmetro) e retorna um valorem Fahrenheit.
*/

float ctof(float t)
{
    return 1.8*t+32;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float t;
    printf("Temperatura: [°C] ");
    scanf("%f", &t);
    printf("\n%.2f °C = %.2f °F\n", t, ctof(t));
    return 0;
}
