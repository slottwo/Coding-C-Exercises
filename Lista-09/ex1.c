#include <locale.h>
#include <stdio.h>

/*
Crie uma função que tenha como parâmetro uma variável do tipo float que indica uma temperatura
em Celsius. A função deve retornar o valor em Fahrenheit. Considere F = 9C/5 + 32
*/

float fahrenheit(float celsius)
{
    return 1.8*celsius + 32;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    float C;
    printf("Temperatura: [°C] ");
    scanf("%f", &C);
    printf("Conversão: %.2f °F\n", fahrenheit(C));
    
    return 0;
}
