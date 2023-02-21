#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int LL[5], IL, FL, IA=0, FA=4, ind, info;

    IL=FL=IA-1;

    printf("Digite o valor a ser adicionado na lista: ");
    scanf("%d", &info);

    while(info>0){
        if((IA==IL)&&(FA==FL))
            printf("Impossivel adicionar uma nova informação\n");
            else if(IL=-1)
                IL=FL=IA;
                else if(FL<FA)
                    FL++;
                    else
                        for(ind=IL;ind<=FA;ind++)
                            LL[ind-1]=LL[ind];
                        IL--;
                LL[FL]=info;
                printf("Iformação adquirida com sucesso\n");

    printf("Digite o valor a ser adicionado na lista: ");
    scanf("%d", &info);
    }
}


