/*5. A partir do preço a vista de um determinado produto, calcular o preço total a pagar e o valor da
prestação mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em três vezes
deverá ser dado um acréscimo de 10% no total a pagar. Se for parcelado em 5 vezes, o acréscimo é
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
        printf("O valor a ser pago no total de 3 parcelas será de: R$%.2f\n", VP);
        printf("O valor da parcela por mês será de: R$%.2f\n", VPM);
    }
        else if(P==5){
            VP=VP+(VP*0.20);
            VPM=VP/5;
            printf("O valor a ser pago no total de 3 parcelas será de: R$%.2f\n", VP);
            printf("O valor da parcela por mês será de: R$%.2f\n", VPM);
        }
}
