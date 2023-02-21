/*7. Faça uma algoritmo que leia uma data (dia, mês e ano), verifique e informe se ela é válida.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void data_procede(int dias, int meses, int anos);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;

    printf("-----------DATA-----------");
    printf("\nDIA: ");
    scanf("%d", &dia);
    printf("\nMÊS: ");
    scanf("%d", &mes);
    printf("\nANO: ");
    scanf("%d", &ano);
    printf("--------------------------");

    data_procede(dia, mes, ano);
}

void data_procede(int dias, int meses, int anos){

    if((dias<1 || dias>31)||(meses<1 || meses>12 )||(anos<0 || anos>2022))
        printf("\nData Inválida!\n");
    else
        printf("\nData Valida!\n");
}
