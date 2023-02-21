/*1. Nome: Edson Renan Baierle
Uma loja tem 15 clientes cadastrados e deseja enviar uma correspondência a cada um deles anunciando um
bônus especial. Faça um algoritmo que leia o código do cliente e o valor de suas compras no ano passado.
Calcule e mostre um bônus de 10% se o valor das compras for menor que R$ 1.000,00 e de 15%, caso contrário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void bonus(int codigo, float compra);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   float valor;
   int  cod, x;

   for(x=1;x<=15;x++){
    printf("\n\nDigite o código do cliente: ");
    scanf("%d", &cod);
    printf("\nDigite o valor das compras do ano passado:R$ ");
    scanf("%f", &valor);
    bonus(cod, valor);
   }

}

void bonus(int codigo, float compra){
    float total;

    if(compra>=1000){
        total=compra+(compra*0.15);
        printf("\nO cliente do código %d ira receber um bonus de 15 porcento.", codigo);
        printf("\nDando ao total em reais sobre a sua compra passada %.2f", total);
    }
        else{
            total=compra+(compra*0.10);
            printf("\nO cliente do código %d ira receber um bonus de 10 porcento.", codigo);
            printf("\nDando ao total em reais sobre sua compra passada %.2f", total);
        }
}
