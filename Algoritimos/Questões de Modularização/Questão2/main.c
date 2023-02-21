/*2.Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$
500,00. Fa�a um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio
reajustado ou uma mensagem, caso ele n�o tenha direito ao aumento.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_aumento(float val);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("\nDigite o valor do sal�rio do funcion�rio: ");
    scanf("%f", &valor);

    calc_aumento(valor);

}

void calc_aumento(float val){
    float calc;

    if(val>=500){
        calc=val+(val*0.30);
        printf("\nO novo sal�rio do funcion�rio ser� de: R$%.2f\n", calc);
    }
        else
            printf("\nO funcion�rio n�o tem direito a aumento!\n");
}
