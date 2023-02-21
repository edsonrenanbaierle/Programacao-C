/*Nome: Edson Renan Baierle
6.Escrever um algoritmo que leia a idade de dois homens e duas mulheres (considere que a idade
dos homens será sempre diferente, assim como das mulheres). Calcule e escreva a soma das idades
do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a
mulher mais velha.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int M1, M2, H1, H2, P, S;

    printf("Digite a sua idade M: ");
    scanf("%d", &M1);
    printf("Digite a sua idade M: ");
    scanf("%d", &M2);
    printf("Digite a sua idade H: ");
    scanf("%d", &H1);
    printf("Digite a sua idade H: ");
    scanf("%d", &H2);

    if((H1>H2)&&(M1>M2)){
        S=H1+M2;
        P=H2*M1;
        printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
        printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
    }
        else if((H1>H2)&&(M2>M1)){
            S=H1+M1;
            P=H2*M2;
            printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
            printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
        }
            else if((H2>H1)&&(M2>M1)){
                S=H2+M1;
                P=H1*M2;
                printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
                printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
            }
                else if((H2>H1)&&(M1>M2)){
                    S=H2+M2;
                    P=H1*M1;
                    printf("A soma da idade do homem mais velho com a mulher mais nova é de: %d\n", S);
                    printf("O produto da idade entre o homem mais novo é a mulher mais velha é de: %d\n", P);
                }
}
