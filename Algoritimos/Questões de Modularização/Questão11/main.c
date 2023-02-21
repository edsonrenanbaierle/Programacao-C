/*Nome: Edson Renan Baierle
11. Uma loja fornece 5% de desconto para funcionários e 10% de desconto para clientes especiais.
Faça um programa que calcule, por meio de uma função com retorno, o valor total a ser pago por uma
pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique o tipo de
cliente.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_cliente(int valor1);
void calc_func(int dinheiro);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opc, valor;


    printf("\nDigite 1 para desconto de funcionários de 5 porcento.");
    printf("\nDigite 2 para desconto de clientes especiais de 10 porcento.");
    printf("\nDigite 3 para sair.");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opc);

    if(opc==1){
        printf("\nDigite o valor da compra: R$");
        scanf("%d", &valor);
        calc_func(valor);
    }
        else if(opc==2){
            printf("\nDigite o valor da compra: R$");
            scanf("%d", &valor);
            calc_cliente(valor);
        }
        else
            printf("\nObrigado por utilizar o programa!\n");
}

void calc_func(int dinheiro){
    float PFL;

    PFL=dinheiro-(dinheiro*0.05);
    printf("O total com aplicação do desconto para funcionários foi de: R$%.2f", PFL);
}

void calc_cliente(int valor1){
    float PF;

    PF=valor1-(valor1*0.10);
    printf("O total com a aplicação do desconto de clientes foi de: R$%.2f", PF);
}
