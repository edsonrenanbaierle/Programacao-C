/*. 4. A partir do preço a vista de um determinado produto, calcular o preço total a pagar e o valor da
prestação mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em três vezes
deverá ser dado um acréscimo de 10% no total a pagar. Se for parcelado em 5 vezes, o acréscimo é
de 20%. Resolva o exercício com função sem retorno.*/

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
    printf("\nDigite 1 para parcelar em três vezes");
    printf("\nDigite 2 para parcelar em cinco vezes");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &opt);

    calc_prest(preco, opt);
}

void calc_prest(float prec, int opc){
    float PParcela, PTotal;

        if(opc==1){
            PParcela=(prec+(prec*0.10))/3;
            PTotal=prec+(prec*0.10);
            printf("\nO total do produto com a parcela de 3 vezes será de: R$%.2f ", PTotal);
            printf("\nO valor da parcela por mês sera de: R$%.2f\n", PParcela);
        }
            else{
            PParcela=(prec+(prec*0.20))/5;
            PTotal=prec+(prec*0.20);
            printf("\nO total do produto com a parcela de 5 vezes será de: R$%.2f ", PTotal);
            printf("\nO valor da parcela por mês sera de: R$%.2f\n", PParcela);
            }
}
