/*3. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$
500,00. Fa�a um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio
reajustado ou uma mensagem, caso ele n�o tenha direito ao aumento.*/
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
        printf("Seu novo salario � de: R$%.2f", sal);
    }
        else
            printf("Voc� n�o est� dentro das condi��es para receber aumento!");
}
