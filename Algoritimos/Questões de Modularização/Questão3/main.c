/*3.Fa�a um programa para calcular e mostrar o sal�rio reajustado de um funcion�rio. O percentual de
aumento encontra-se na tabela a seguir. Resolva o exerc�cio com fun��o com retorno.
Sal�rio Percentual de aumento
At� R$ 300,00 35%
Acima de R$ 300,00 15%*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calc_aumento(float salario);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal, X;

    printf("Digite o valor so sal�rio do funcion�rio: R$");
    scanf("%f", &sal);

    X=calc_aumento(sal);

    printf("O novo sal�rio do funcion�rio ser� de: R$%.2f", X);
}

float calc_aumento(float salario){
    float valor;

    if(salario<=300)
        valor=salario+(salario*0.35);
        else
            valor=salario+(salario*0.30);

    return valor;
}
