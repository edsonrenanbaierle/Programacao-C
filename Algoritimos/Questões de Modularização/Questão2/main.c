/*2.Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$
500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário
reajustado ou uma mensagem, caso ele não tenha direito ao aumento.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_aumento(float val);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("\nDigite o valor do salário do funcionário: ");
    scanf("%f", &valor);

    calc_aumento(valor);

}

void calc_aumento(float val){
    float calc;

    if(val>=500){
        calc=val+(val*0.30);
        printf("\nO novo salário do funcionário será de: R$%.2f\n", calc);
    }
        else
            printf("\nO funcionário não tem direito a aumento!\n");
}
