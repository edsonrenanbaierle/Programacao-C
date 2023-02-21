/*Nome: Edson Renan Baierle.
5. Faça um programa que leia a idade de dois homens e duas mulheres (considere que a idade dos
homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades do
homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a
mulher mais velha. Resolva o exercício com função sem retorno.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_idade(int mulh1, int mulh2, int home1, int home2);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int M1, M2, H1, H2;

    printf("Digite a sua idade M: ");
    scanf("%d", &M1);
    printf("Digite a sua idade M: ");
    scanf("%d", &M2);
    printf("Digite a sua idade H: ");
    scanf("%d", &H1);
    printf("Digite a sua idade H: ");
    scanf("%d", &H2);

    calc_idade(M1, M2, H1, H2);
}

void calc_idade(int mulh1, int mulh2, int home1, int home2){
    int S, P;

    if((home1>home2)&&(mulh1>mulh2)){
        S=home1+mulh2;
        P=home2*mulh1;
        printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
        printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
    }
        else if((home1>home2)&&(mulh2>mulh1)){
            S=home1+mulh1;
            P=home2*mulh2;
            printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
            printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
        }
            else if((home2>home1)&&(mulh2>mulh1)){
                S=home2+mulh1;
                P=home1*mulh2;
                printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
                printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
            }
                else if((home2>home1)&&(mulh1>mulh2)){
                    S=home2+mulh2;
                    P=home1*mulh1;
                    printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
                    printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
                }
                    else if((home2==home1)&&(mulh1==mulh2)){
                    S=home2+mulh2;
                    P=home1*mulh1;
                    printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
                    printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
                }
}
