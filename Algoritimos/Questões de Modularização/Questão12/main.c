/*Nome: Edson Renan Baierle
12. O cardápio de uma lanchonete é o seguinte:
Especificação Preço unitário
100 Cachorro quente R$3,50
101 Bauru simples R$4,00
102 Bauru c/ovo R$4,50
103 Hamburger R$4,00
104 Cheeseburger R$3,00
Escrever um programa que leia o código do item pedido, a quantidade e calcule, através de uma
função com retorno, o valor a ser pago por aquele lanche. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float valor_Cquente(float valor);
float valor_Bsimples(float valor);
float valor_Bovo(float valor);
float valor_Hamburger(float valor);
float valor_Cheeseburger(float valor);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float soma=0;
    int opc;

    printf("\n---CARDAPIO---");
    printf("\nDIGITE CONFORME O NÚMERO INFORMADO PARA REALIZAR O PEDIDO!!\n");
    printf("\n100 Cachorro quente R$3,50");
    printf("\n101 Bauru simples R$4,00");
    printf("\n102 Bauru c/ovo R$4,50");
    printf("\n103 Hamburger R$4,00");
    printf("\n104 Cheeseburger R$3,00");
    printf("\n105 para finalizar o pedido\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opc);

    while(opc!=105){
        switch(opc){
            case 100: soma=valor_Cquente(soma);
            printf("O valor total deu: R$%.2f\n", soma);
            break;
            case 101: soma=valor_Bsimples(soma);
            printf("O valor total deu: R$%.2f\n", soma);
            break;
            case 102: soma=valor_Bovo(soma);
            printf("O valor total deu: R$%.2f\n", soma);
            break;
            case 103: soma=valor_Hamburger(soma);
            printf("O valor total deu: R$%.2f\n", soma);
            break;
            case 104: soma=valor_Cheeseburger(soma);
            printf("O valor total deu: R$%.2f\n", soma);
            break;
        }
    printf("\n---CARDAPIO---");
    printf("\nDIGITE CONFORME O NÚMERO INFORMADO PARA REALIZAR O PEDIDO!!\n");
    printf("\nCASO DESEJE MAIS INFORME SUA ESCOLHA, PARA ENCERRAR O PEDIDO DIGITE 105!!");
    printf("\n100 Cachorro quente R$3,50");
    printf("\n101 Bauru simples R$4,00");
    printf("\n102 Bauru c/ovo R$4,50");
    printf("\n103 Hamburger R$4,00");
    printf("\n104 Cheeseburger R$3,00");
    printf("\n105 para finalizar o pedido\n");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opc);
    }
}

float valor_Cquente(float valor){
    int quant;
    float total;

    printf("\nQuantos Cachorros quentes deseja: ");
    scanf("%d", &quant);

    total=quant*3.50;
    valor=total+valor;

    return valor;
}

float valor_Bsimples(float valor){
    int quant;
    float total;

    printf("\nQuantos Bauru simples deseja: ");
    scanf("%d", &quant);

    total=quant*4.00;
    valor=total+valor;

    return valor;
}

float valor_Bovo(float valor){
    int quant;
    float total;

    printf("\nQuantos Bauru c/ovo deseja: ");
    scanf("%d", &quant);

    total=quant*4.50;
    valor=total+valor;

    return valor;
}

float valor_Hamburger(float valor){
    int quant;
    float total;

    printf("\nQuantos Hamburger deseja: ");
    scanf("%d", &quant);

    total=quant*4.00;
    valor=total+valor;

    return valor;
}

float valor_Cheeseburger(float valor){
    int quant;
    float total;

    printf("\nQuantos Cheeseburger deseja: ");
    scanf("%d", &quant);

    total=quant*3.00;
    valor=total+valor;

    return valor;
}


