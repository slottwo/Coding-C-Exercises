#include <stdio.h>
#include <locale.h>

/**/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int x;
    
    printf("x: ");
    scanf("%d", &x);

    print("%d", x);
    
    return 0;
}
