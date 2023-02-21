/*. 4. A partir do pre�o a vista de um determinado produto, calcular o pre�o total a pagar e o valor da
presta��o mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em tr�s vezes
dever� ser dado um acr�scimo de 10% no total a pagar. Se for parcelado em 5 vezes, o acr�scimo �
de 20%. Resolva o exerc�cio com fun��o sem retorno.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_prest(float prec, int opc);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opt;
    float preco;

    printf("\nDigite o valor do produto: R$");
    scanf("%f", &preco);
    printf("\nDigite 1 para parcelar em tr�s vezes");
    printf("\nDigite 2 para parcelar em cinco vezes");
    printf("\nDigite a op��o desejada: ");
    scanf("%d", &opt);

    calc_prest(preco, opt);
}

void calc_prest(float prec, int opc){
    float PParcela, PTotal;

        if(opc==1){
            PParcela=(prec+(prec*0.10))/3;
            PTotal=prec+(prec*0.10);
            printf("\nO total do produto com a parcela de 3 vezes ser� de: R$%.2f ", PTotal);
            printf("\nO valor da parcela por m�s sera de: R$%.2f\n", PParcela);
        }
            else{
            PParcela=(prec+(prec*0.20))/5;
            PTotal=prec+(prec*0.20);
            printf("\nO total do produto com a parcela de 5 vezes ser� de: R$%.2f ", PTotal);
            printf("\nO valor da parcela por m�s sera de: R$%.2f\n", PParcela);
            }
}
