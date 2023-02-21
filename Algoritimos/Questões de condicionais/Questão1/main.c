//1. Ler um valor e escrever se é positivo, negativo ou zero.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("Digite o número: ");
    scanf("%d", &x);

    if(x<0)
        printf("Número negativo");
        else if(x>0)
        printf("Número positivo");
        else
            printf("Número é zero");

}
