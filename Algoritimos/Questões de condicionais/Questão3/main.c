/*3. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$
500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário
reajustado ou uma mensagem, caso ele não tenha direito ao aumento.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float sal;

    printf("digite o seu salario: R$ ");
    scanf("%f", &sal);

    if(sal<500){
        sal=sal+(sal*0.30);
        printf("Seu novo salario é de: R$%.2f", sal);
    }
        else
            printf("Você não está dentro das condições para receber aumento!");
}
