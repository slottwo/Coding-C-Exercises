#include <locale.h>
#include <stdio.h>

/*
Crie uma estrutura com nome "cidade". A estrutura deve conter os campos:
- Código da cidade
- Nome da cidade
- Temperatura em Celsius
- Temperatura em Fahrenheit
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

int main()
{
    return 0;
}
