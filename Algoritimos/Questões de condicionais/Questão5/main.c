/*5. A partir do pre�o a vista de um determinado produto, calcular o pre�o total a pagar e o valor da
presta��o mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em tr�s vezes
dever� ser dado um acr�scimo de 10% no total a pagar. Se for parcelado em 5 vezes, o acr�scimo �
de 20%.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");

    float VP, VPM; //VP=valor do produto VPM= valor por mes
    int P; //P=Parcela

    printf("Digite o valor do produto: R$");
    scanf("%f", &VP);
    printf("Digite se deseja parcelar em 3 ou 5 vezes: ");
    scanf("%d", &P);

    if(P==3){
        VP=VP+(VP*0.10);
        VPM=VP/3;
        printf("O valor a ser pago no total de 3 parcelas ser� de: R$%.2f\n", VP);
        printf("O valor da parcela por m�s ser� de: R$%.2f\n", VPM);
    }
        else if(P==5){
            VP=VP+(VP*0.20);
            VPM=VP/5;
            printf("O valor a ser pago no total de 3 parcelas ser� de: R$%.2f\n", VP);
            printf("O valor da parcela por m�s ser� de: R$%.2f\n", VPM);
        }
}
