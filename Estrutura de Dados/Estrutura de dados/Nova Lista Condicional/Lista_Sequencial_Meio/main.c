#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int LL[5], Ind, IA=0, FA=4, IL, FL, info, k;

    IL=FL=IA-1;

    printf("\nDigite a informação que você deseja armazenar no inicio da LN: ");
    scanf("%d",&info);
    printf("\nDigite o novo valor LN: ");
    scanf("%d",&k);

    while (info > 0){

    if(((IA==IL)&&(FA==FL))||(k >FL-IL+2)||(k<=0)||((IL==-1)&& (k!=1)))
    printf("\nImpossivel realizar inserção\n");
    else if(IL==-1)
        IL=FL=IA;
        else if (FL != FA){
            for(Ind=FL;Ind>=IL+k-1;Ind--)
            LL[Ind+1] = LL[Ind];
            FL=FL+1;
        }
        else{
            for(Ind=IL; Ind <= IL+k-2;Ind++)
            LL[Ind-1] =LL[Ind];
            IL= IL+1;
        }
    LL[IL+k-1]=info;
    printf("\nInformação inserida com sucesso!\n");

    printf("LISTA\n");
    for(Ind=IL;Ind<=FL;Ind++)
    printf("\n %d", LL[Ind]);


    printf("\nDigite a informação que você deseja armazenar no inicio da LN: ");
    scanf("%d",&info);
    printf("\nDigite o novo valor LN: ");
    scanf("%d",&k);

}

return 0;
}
