/*1.Faça um programa que receba quatro notas, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void calc_media(float nota1, float nota2, float nota3, float nota4);
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
    printf("\nDigite a quarta nota:");
    scanf("%f", &n4);

    calc_media(n1,n2,n3,n4); //chamada a função calc_m e mandada as informações.
}

void calc_media(float nota1, float nota2, float nota3, float nota4){
    float media;

    media=(nota1+nota2+nota3+nota4)/4;

    printf("\nA média é %.2f", media);
    if(media>=7)
        printf("\nAPROVADO!!\n");
        else
            printf("\nREPROVADO\n");
}
