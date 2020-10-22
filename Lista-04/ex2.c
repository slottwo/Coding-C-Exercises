#include <stdio.h>
#include <locale.h>

/*
Faça um algoritmo que receba um número n do usuário e calcule 
o valor da série S dos n primeiros termos da série:

S = Σ(n, i=1)(-1^(i+1)*i^(-1))
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;
    float S = 0;
    while (1)
    {
        printf("Insira um número natural maior que 0: ");
        scanf("%d", &n);
        if (n < 1)
        {
            printf("Número inválido, tente novamente.\n");
            continue;
        }
        break;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            S -= 1/(float)i;
        }
        else
        {
            S += 1/(float)i;
        }
    }
    printf("S(%d) = %f\n", n, S);
    return 0;
}