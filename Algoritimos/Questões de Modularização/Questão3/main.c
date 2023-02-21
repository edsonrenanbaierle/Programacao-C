/*3.Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de
aumento encontra-se na tabela a seguir. Resolva o exercício com função com retorno.
Salário Percentual de aumento
Até R$ 300,00 35%
Acima de R$ 300,00 15%*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calc_aumento(float salario);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal, X;

    printf("Digite o valor so salário do funcionário: R$");
    scanf("%f", &sal);

    X=calc_aumento(sal);

    printf("O novo salário do funcionário será de: R$%.2f", X);
}

float calc_aumento(float salario){
    float valor;

    if(salario<=300)
        valor=salario+(salario*0.35);
        else
            valor=salario+(salario*0.30);

    return valor;
}
