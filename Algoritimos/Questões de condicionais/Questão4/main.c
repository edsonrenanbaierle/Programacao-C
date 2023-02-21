/*4. Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual
de aumento encontra-se na tabela a seguir.
Salário Percentual de aumento
Até R$ 300,00 35%
Acima de R$ 300,00 15%*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal;

    printf("Qual o salário do funcionario: R$");
    scanf("%f", &sal);

    if(sal<300){
        sal=sal+(sal*0.35);
        printf("Novo salário de: R$%.2f\n", sal);
    }
    else
        sal=sal+(sal*0.15);
        printf("Novo valor do salário de: R$%.2f", sal);

}
