/*4. Fa�a um programa para calcular e mostrar o sal�rio reajustado de um funcion�rio. O percentual
de aumento encontra-se na tabela a seguir.
Sal�rio Percentual de aumento
At� R$ 300,00 35%
Acima de R$ 300,00 15%*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal;

    printf("Qual o sal�rio do funcionario: R$");
    scanf("%f", &sal);

    if(sal<300){
        sal=sal+(sal*0.35);
        printf("Novo sal�rio de: R$%.2f\n", sal);
    }
    else
        sal=sal+(sal*0.15);
        printf("Novo valor do sal�rio de: R$%.2f", sal);

}
