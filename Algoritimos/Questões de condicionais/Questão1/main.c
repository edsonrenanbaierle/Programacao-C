//1. Ler um valor e escrever se � positivo, negativo ou zero.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("Digite o n�mero: ");
    scanf("%d", &x);

    if(x<0)
        printf("N�mero negativo");
        else if(x>0)
        printf("N�mero positivo");
        else
            printf("N�mero � zero");

}
